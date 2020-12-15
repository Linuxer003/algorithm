//
// Created by 王国洪 on 2020/12/8.
//

#ifndef CHERNO_DFS_H
#define CHERNO_DFS_H

#include <iostream>
#include <vector>

class DFS {
public:
    /**
     * 求解A中是否某些数和等于k
     * @param sum
     * @param i
     * @return
     */
    int k;
    std::vector<int> A;
    bool FindK(int sum, int i);

    /**
     * POJ2386 统计湖泊
     * @param field
     * @param x
     * @param y
     * @return
     */
    int LakeCount(std::vector<std::vector<char>>& field, int x, int y);

    /**
     * leetCode886.可能的二分法DFS解法
     * @param N
     * @param dislikes
     * @return
     */
    bool possibleBipartition(int N, std::vector<std::vector<int>>& dislikes);
};


#endif //CHERNO_DFS_H
