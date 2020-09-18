#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include "ExpandedText.h"



int main(int argc, char* argv[]) {
    ExpandedText Text;
    Log Log;
    char *path = new char[1000];
    std::ofstream fout("LogFile.txt");

    std::cout << "Enter path to pattern txt file(enter pattern.txt, to use default):\n";
    //std::cin >> path;
    path = argv[1];
    try {
        Text.fill_in(path);
    }
    catch (std::exception &exception) {
        fout<<exception.what();
        return Log.FatalError();
    }

    std::cout << "Enter path to JSON with params file(enter params.json, to use default):\n";
    //std::cin >> path;
    path = argv[2];
    try {
        Text.json_parser(path);
    } catch (std::exception &exception) {
        fout<<exception.what();
        return Log.FatalError();
    }


    try {
        Text.insert_in_pattern();

    } catch (std::exception &exception) {
        fout<<exception.what();
        return Log.FatalError();
    }
    try {
        Text.find_current_date();
    }
    catch (std::exception &exception) {
        fout<<exception.what();
        return Log.FatalError();
    }

    try {
        Text.delete_empty_params();
    } catch (std::exception &exception) {
        fout<<exception.what();
        return Log.FatalError();
    }

    std::cout << "Print -f if you want the result in txt file or -c for the result in console\n";
    std::string flag;
    //std::cin >> flag;
    flag = argv[3];
    std::cout<<"\n";
    if (flag == "-f") {
        std::ofstream file("result.txt");
        file << Text.get_pattern();
        file.close();
        std::cout << "\nCheck " << "result.txt" << " to get the result!\n";

    }else
        std::cout<<Text.get_pattern()<<"\n";
    fout<<"Task successfully completed!";
    std::cout<<"See LogFIle.txt for more info";
    return 0;
}