//
// Created by Денис on 17.09.2020.
//

#include "Log.h"
#include <iostream>
Log::Log() {
    result = "";
}
int Log::FatalError() {
    std::cout<<result;
    return 0;
}
void Log::TxtError(){
    result+="\nError, file with pattern doesn't exist\n";
}

void Log::TxtOk(){
    result+="\nPath to the pattern is correct!\n";
}
void Log::JsonError(){
    result+="\nError, file with JSON doesn't exist\n";
}
void Log::JsonOk(){
    result+="\nPath to the JSON is correct!\n";
}
void Log::ParamsError(){
    result+="\nOne of the main parameter has no value\n";
}
void Log::ParamsOk(){
    result+="\nMain parameters are correct\n";
}
void Log::FunctionalError(){
    result+="\nError in functional parameter\n";
}
void Log::FunctionalOk(){
    result+="\nFunctional parameters are correct\n";
}
void Log::FunctionInJson(){
    result+="\nFunctional parameter in JSON\n";
}
void Log::SuccessPattern(){
   std::cout<<"\nPattern successfully generated. See the log file for more info\n"<<result;
}
