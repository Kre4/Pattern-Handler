//
// Created by Денис on 14.09.2020.

#include <iostream>
#include <stdio.h>
#include <vector>
#ifndef ITMO_CLUB_EXPANDEDTEXT_H
#define ITMO_CLUB_EXPANDEDTEXT_H
struct parameter{
    std::string key="";
    std::string value="";
};

class ExpandedText {
public:
    std::string pattern;
    std::vector<parameter> params;
    bool fill_in(const char *path);
    int insert_in_pattern();
    void delete_empty_params();
    void find_current_date();
    bool json_parser(const char  *path);
private:

};


#endif //ITMO_CLUB_EXPANDEDTEXT_H
