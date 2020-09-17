#include <iostream>
#include "ExpandedText.h"
#include <fstream>
#include "Log.h"

int main() {
    ExpandedText Text;
    Log Log;
    char *path = new char[1000];
    std::cout << "Enter path to pattern txt file:\n";
    std::cin >> path;
    try {
        Text.fill_in(path);

    }
    catch (std::exception) {
        Log.TxtError();
        return Log.FatalError();
    }
    Log.TxtOk();

    std::cout << "Enter path to JSON with params file:\n";
    std::cin >> path;

    try {
        Text.json_parser(path);
    } catch (std::exception) {
        Log.JsonError();
        return Log.FatalError();
    }
    Log.JsonOk();

    try {
        Text.insert_in_pattern();

    } catch (std::exception) {
        Log.FunctionInJson();
        return Log.FatalError();
    }
    try {
        Text.find_current_date();
    }
    catch (std::exception) {
        Log.FunctionalError();
        return Log.FatalError();
    }
    Log.FunctionalOk();
    try {
        Text.delete_empty_params();
    } catch (std::exception) {
        Log.ParamsError();
        return Log.FatalError();
    }
    Log.ParamsOk();

    std::cout << "Print -f if you want the result in txt file or -c for the result in console\n";
    std::string flag;
    std::cin >> flag;
    if (flag == "-f") {
        std::cout << "\nEnter path:\n";
        std::cin >> path;
        std::ofstream file(path);
        file << Text.pattern;
        file.close();
        std::cout << "\n Check " << path << " to get the result!\n";

    }else
        std::cout<<Text.pattern<<"\n";
    Log.SuccessPattern();
    return 0;
}