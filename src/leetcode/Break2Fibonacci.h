//
// Created by wgh on 2020/12/8.
//

#ifndef CHERNO_BREAK2FIBONACCI_H
#define CHERNO_BREAK2FIBONACCI_H

#include <iostream>
#include <vector>
#include <string>
#include <list>
class Break2Fibonacci {
public:
    std::vector<int> splitIntoFibonacci(std::string& S);
    bool backtrace(std::vector<int>& F, std::string& S, int length, int index, int sum, int prev);
};


#endif //CHERNO_BREAK2FIBONACCI_H
