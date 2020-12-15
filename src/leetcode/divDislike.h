//
// Created by wgh on 2020/12/15.
//

#ifndef CHERNO_DIVDISLIKE_H
#define CHERNO_DIVDISLIKE_H

#include <vector>
#include <map>
class divDislike {
public:
    bool possibleBipartition(int N, std::vector<std::vector<int>>& dislikes);
    bool dfs(int index);

private:
    std::map<int,std::vector<int>> relation;
    std::map<int, int> color;
};


#endif //CHERNO_DIVDISLIKE_H
