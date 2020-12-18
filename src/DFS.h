//
// Created by 王国洪 on 2020/12/8.
//

#ifndef CHERNO_DFS_H
#define CHERNO_DFS_H

#include <iostream>
#include <vector>
#include <map>

class DFS {
public:
    /**
     * 求解A中是否某些数和等于k
     * @param sum
     * @param i
     * @return
     */
    int tarSum;
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
    bool dfsBi(int index, int c, std::vector<int>& color, std::vector<std::vector<int>>& graph);

    /**
     * leetCode 123 买卖股票 dfs解法
     * @param prices
     * @return
     */
    int maxProfit(std::vector<int>& prices);
    /**
     *
     * @param prices
     * @param index 当前处理的日期下标
     * @param state 当前手里是否有股票
     * @param k     已经交易次数，当k=2，是递归的边界
     * @param mem   记录递归状态，缩短耗时
     * @return
     */
    int dfsProfit(std::vector<int>& prices, int index, int state, int k);
};


#endif //CHERNO_DFS_H
