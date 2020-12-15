//
// Created by wgh on 2020/12/10.
//

#ifndef CHERNO_REGEX_H
#define CHERNO_REGEX_H

#include <vector>
#include <string>

class RegEx {
public:
    /**
     * 判断是否有效数字，RegEx超时了，转为DFA求解
     * @param s
     * @return
     */
    int length = 7;
    std::vector<std::vector<int>>* state;
    bool isNumber(std::string& s);
    RegEx();
    ~RegEx();
};


#endif //CHERNO_REGEX_H
