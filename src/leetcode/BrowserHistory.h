//
// Created by 王国洪 on 2020/12/9.
//

#ifndef CHERNO_BROWSERHISTORY_H
#define CHERNO_BROWSERHISTORY_H
#include <iostream>
#include <vector>
#include <string>
class BrowserHistory {
public:
    BrowserHistory(std::string homepage);
    void visit(std::string url);
    std::string back(int steps);
    std::string forward(int steps);

private:
    std::vector<std::string> history;
    int index;
};


#endif //CHERNO_BROWSERHISTORY_H
