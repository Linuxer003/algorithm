//
// Created by wgh on 2020/12/12.
//

#ifndef CHERNO_DP_H
#define CHERNO_DP_H

#include <vector>

class DP {
public:
    /**
     * 求解最长摇摆数组
     * @param nums
     * @return
     */
    int wiggleMaxLength(std::vector<int>& nums);

    /**
     * leetCode 714 买卖股票的最佳时机含手续费
     * @param prices
     * @param fee
     * @param sells 卖股票的日子下标集合
     * @param buys 买股票的日子下标集合
     * @return profit 收益
     */
    int maxProfit(std::vector<int>& prices, int& fee, std::vector<int>& sells, std::vector<int>& buys);

    /**
     * leetCode 123 买卖股票的最佳时机 III
     * @param prices
     * @return
     */
    int maxProfit(std::vector<int>& prices);
};


#endif //CHERNO_DP_H
