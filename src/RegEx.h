//
// Created by wgh on 2020/12/10.
//

#ifndef CHERNO_REGEX_H
#define CHERNO_REGEX_H

#include <vector>
#include <string>

class RegEx {
public:
    bool isNumber(std::string& s);
    RegEx();
    ~RegEx();

private:
    int length = 7;
    std::vector<std::vector<int>>* state;
};


#endif //CHERNO_REGEX_H
