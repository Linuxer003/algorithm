//
// Created by 王国洪 on 2020/12/8.
//

#ifndef CHERNO_DFS_H
#define CHERNO_DFS_H

#include <iostream>
#include <vector>

class DFS {
public:
    int k;
    std::vector<int> A;
    // 求解A中是否某些数和等于k
    bool FindK(int sum, int i);
    // POJ2386
    int LakeCount(std::vector<std::vector<char>>& field, int x, int y);
};


#endif //CHERNO_DFS_H
