//
// Created by Денис on 17.09.2020.
//

#pragma once
#include <string>
class Log {
private:
    std::string result;

public:
    Log();
    int FatalError();
    void TxtError();
    void TxtOk();
    void JsonError();
    void JsonOk();
    void ParamsError();
    void ParamsOk();
    void FunctionalError();
    void FunctionalOk();
    void FunctionInJson();
    void SuccessPattern();

};



