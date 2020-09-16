#include <iostream>
#include "ExpandedText.h"
#include <fstream>


int main() {
    ExpandedText Text;
    char *path = new char[1000];
    std::cout << "Enter path to pattern txt file:\n";
    std::cin >> path;
    if (Text.fill_in(path)) {
        std::cout << "Success! Enter params\n";
    } else {
        std::cout << "Error, file doesn't exist\n";
        return 0;
    }

    std::cout << "Enter path to JSON with params file:\n";
    std::cin >> path;
    if (Text.json_parser(path)) {
        std::cout << "Success!\n";
    } else {
        std::cout << "Error, file doesn't exist\n";
        return 0;
    }

    if (Text.insert_in_pattern() > 0) {
        Text.find_current_date();
        Text.delete_empty_params();

        std::cout << "Print -f if you want the result in txt file or -c for the result in console\n";
        std::string flag;
        std::cin >> flag;
        if (flag == "-f") {
            std::cout << "\nEnter path:\n";
            std::cin >> path;
            std::ofstream file(path);
            file << Text.pattern;
            file.close();
            std::cout << "\n Check " << path << " to get the result!";
        } else
            std::cout << Text.pattern;
    }
    return 0;
}
