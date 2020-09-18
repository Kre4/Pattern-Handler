//
// Created by Денис on 17.09.2020.
//

#pragma once
#include <string>
#include <iostream>
class Log{
public:
    int FatalError() {
        std::cout<<"Check LogFile.txt";
        return 1;
    }
};
class TxtException: public std::exception{
public:
    const char * what() const noexcept {return "\nError, file with pattern doesn't exist\n";}
};
class JsonException: public std::exception{
public:
    const char * what() const noexcept {return "\nError, file with JSON doesn't exist\n";}
};
class ParamsException: public std::exception{
public:
    const char * what() const noexcept {return "\nOne of the main parameter has no value\n";}
};
class FunctionalException: public std::exception{
public:
    const char * what() const noexcept {return "\nError in functional parameter\n";}
};
class FunctionalJsonException: public std::exception{
public:
    const char * what() const noexcept {return "\nFunctional parameter in JSON\n";}
};


