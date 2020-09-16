//
// Created by Денис on 14.09.2020.
//
#include "ExpandedText.h"
#include <stdio.h>
#include <vector>
#include <string>
#include <ctime>
bool replace(std::string &str, const std::string &from, const std::string &to) {
    size_t start_pos = str.find(from);

    if (start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

bool ExpandedText::fill_in(const char *path) {

    char tmp[1000];
    FILE *fp;
    fp = fopen(path, "r");
    if (fp != NULL) {
        while (!feof(fp)) {
            fgets(tmp, 1000, fp);
            pattern += std::string(tmp);
        }
        return true;
    } else return false;
}
void ExpandedText::find_current_date() {
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    replace(pattern,"{current_date}",asctime(timeinfo));
}
bool ExpandedText::json_parser(const char *path) {
    char tmp[1000];
    FILE *fp;
    std::string reader = "";
    bool notClosed = true;
    fp = fopen(path, "r+");
    if (fp != NULL) {
        while (!feof(fp)) {
            fgets(tmp, 1000, fp);
            for (int i = 0; i < std::string(tmp).length() - 2; i++) {
                if (tmp[i] == '"')
                    notClosed = true;
                if (tmp[i + 1] == '"' && notClosed)
                    notClosed = false;
                if (notClosed)
                    reader += tmp[i + 1];

            }

        }
        fclose(fp);
        //replace(reader,"name","replaced!");
        int i1 = 0, i2=0;
        parameter par;
        int counter = 1;
        while (i2 >= 0) {
            if (counter % 2 == 1) {
                i2 = reader.find(":");
                par.key = reader.substr(i1, i2);
                par.key.erase(0,1);
                reader.erase(i1, 1 + i2 - i1);


            } else {
                i2 = reader.find(",");
                par.value = reader.substr(i1, i2);
                par.value.erase(0,1);
                reader.erase(i1, 1 + i2 - i1);


            }
            if (counter%2 ==0) {
                params.push_back(par);
            }
            counter++;
        }
        //}
        //std::cout<<reader<<"\n";
        return true;
    } else return false;
}

int ExpandedText::insert_in_pattern() {
    for (int i = 0; i<params.size();i++){
        if (params[i].key == "current_date"){
            std::cout<<"Fatal error; Current_date in JSON";
            return -1;
        }
        if (!replace(pattern,"{"+params[i].key+"}",params[i].value))
            replace(pattern,"{*"+params[i].key+"}",params[i].value);
    }
    return 1;
}
void ExpandedText::delete_empty_params() {
    int i1= pattern.find("{"),
    i2 = pattern.find("}");
    while (i1>=0){

       pattern.erase(i1,i2-i1+1);
        i1= pattern.find("{");
        i2 = pattern.find("}");
    }
}
