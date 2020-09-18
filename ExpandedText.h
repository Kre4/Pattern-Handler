#pragma once
#include "FunctionalParameters.h"
#include "Log.h"
#include <vector>
#include <fstream>




struct parameter {
    std::string key = "";
    std::string value = "";
};

class ExpandedText {
private:
    std::string pattern;
    std::vector<parameter> params;
    bool replace(std::string &str, const std::string &from, const std::string &to) {
        size_t start_pos = str.find(from);

        if (start_pos == std::string::npos)
            return false;
        str.replace(start_pos, from.length(), to);
        return true;
    }

public:
    void fill_in(const char *path) {

        char tmp[1000];
        //FILE *fp;
        //fp = fopen(path, "r");
        std::ifstream fp(path);

        if (!fp.is_open())
            throw TxtException();
        while (!fp.eof()) {
            fp.getline(tmp, 1000);
            pattern += std::string(tmp) + "\n";
        }
        fp.close();
    }

    void find_current_date() {
        FunctionalParameters f;
        replace(pattern, "{current_date}", f.current_date());
    }

    void json_parser(const char *path) {
        char tmp[1000];
        FILE *fp;
        std::string reader = "";
        bool notClosed = true;
        fp = fopen(path, "r+");
        if (fp == NULL)
            throw JsonException();
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
        int i1 = 0, i2 = 0;
        parameter par;
        int counter = 1;
        while (i2 >= 0) {
            if (counter % 2 == 1) {
                i2 = reader.find(":");
                par.key = reader.substr(i1, i2);
                par.key.erase(0, 1);
                reader.erase(i1, 1 + i2 - i1);


            } else {
                i2 = reader.find(",");
                par.value = reader.substr(i1, i2);
                par.value.erase(0, 1);
                reader.erase(i1, 1 + i2 - i1);


            }
            if (counter % 2 == 0) {
                params.push_back(par);
            }
            counter++;
        }
    }


    void insert_in_pattern() {
        for (int i = 0; i < params.size(); i++) {
            if (params[i].key == "current_date") {

                throw FunctionalJsonException();
            }
            if (!replace(pattern, "{" + params[i].key + "}", params[i].value))
                replace(pattern, "{*" + params[i].key + "}", params[i].value);
        }
    }

    void delete_empty_params() {
        int abc = pattern.find("*");
        if (abc >= 0) {
            throw ParamsException();
        }
        int i1 = pattern.find("{"),
                i2 = pattern.find("}");

        while (i1 >= 0) {

            pattern.erase(i1, i2 - i1 + 1);
            i1 = pattern.find("{");
            i2 = pattern.find("}");
        }
    }

    std::string get_pattern(){
        return pattern;
    }

};
