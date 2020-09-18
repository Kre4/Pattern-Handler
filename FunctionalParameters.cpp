//
// Created by Денис on 17.09.2020.
//
#include <iostream>
#include <string>
#include <time.h>
#include "FunctionalParameters.h"

std::string FunctionalParameters::current_date() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    return buf;
}