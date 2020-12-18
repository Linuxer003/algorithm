//
// Created by wgh on 2020/12/12.
//
#include <iostream>
#include "DP.h"
#include <algorithm>

int DP::wiggleMaxLength(std::vector<int>& nums) {
  int n = nums.size();
  if (n < 2) {
    return n;
  }
  int up = 1, down = 1;
  for (int i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1]) {
      up = std::max(up, down + 1);
    } else if (nums[i] < nums[i - 1]) {
      down = std::max(up + 1, down);
    }
  }
  return std::max(up, down);
}

int DP::maxProfit(std::vector<int> &prices, int& fee, std::vector<int>& sells, std::vector<int>& buys) {
  int sell = 0, buy = -prices[0];
  int N = prices.size();
  for (int i = 1; i < N; ++i) {
    if (sell < buy+prices[i]-fee){
      sell = buy+prices[i]-fee;
      sells.push_back(i);
    }
    if (buy < sell - prices[i]){
      buy = sell - prices[i];
      buys.push_back(i);
    }
    std::cout << sell << ' ' << buy << '\n';
  }
  return sell;
}

int DP::maxProfit(std::vector<int> &prices) {
  int n = prices.size();
  if (n == 0)
    return 0;

//  // 三维数组dp解法
//  int mem[n][3][2];
//  mem[0][0][0] = 0;
//  mem[0][0][1] = -prices[0];
//  mem[0][1][0] = 0;
//  mem[0][1][1] = -prices[0];
//  mem[0][2][0] = 0;
//  for (int i = 1; i < n; ++i) {
//    // 每一天的初始化状态都是之前和现在没有交易过的
//    mem[i][0][0] = mem[i-1][0][0];
//    // 当前买入第一笔的最大收益，从买入第一笔在之前和第一笔发生在今天中选择
//    mem[i][0][1] = std::max(mem[i-1][0][1], mem[i-1][0][0]-prices[i]);
//    // 当前卖出第一笔的最大收益，从卖出第一笔在之前和第一笔发生在今天中选择
//    mem[i][1][0] = std::max(mem[i-1][1][0], mem[i-1][0][1]+prices[i]);
//    // 第二笔的情况参考第一笔
//    mem[i][1][1] = std::max(mem[i-1][1][1], mem[i-1][1][0]-prices[i]);
//    mem[i][2][0] = std::max(mem[i-1][2][0], mem[i-1][1][1]+prices[i]);
//  }
//  int a = std::max(mem[n-1][0][1], mem[n-1][1][0]);
//  int b = std::max(mem[n-1][1][1], mem[n-1][2][0]);
//  return std::max(a,b);

//  // 二维数组dp解法
//  int mem[n][5];
//  // 二维下标依次表示 没有交易、第一笔买入、第一笔卖出、第二笔买入、第二笔卖出
//  mem[0][0] = 0;
//  mem[0][1] = -prices[0];
//  mem[0][2] = 0;
//  mem[0][3] = -prices[0];
//  mem[0][4] = 0;
//  for (int i = 1; i < n; ++i) {
//    mem[i][0] = 0;
//    mem[i][1] = std::max(mem[i-1][1],mem[i-1][0]-prices[i]);
//    mem[i][2] = std::max(mem[i-1][2],mem[i-1][1]+prices[i]);
//    mem[i][3] = std::max(mem[i-1][3],mem[i-1][2]-prices[i]);
//    mem[i][4] = std::max(mem[i-1][4],mem[i-1][3]+prices[i]);
//  }
//  int a = std::max(mem[n-1][1], mem[n-1][2]);
//  int b = std::max(mem[n-1][3], mem[n-1][4]);
//  return std::max(a,b);

// 空间优化dp解法
  int dp0 = 0, dp1 = -prices[0], dp2 = 0, dp3 = -prices[0], dp4 = 0;
  for (int i = 1; i < n; ++i) {
    dp1 = std::max(dp1, dp0-prices[i]);
    dp2 = std::max(dp2, dp1+prices[i]);
    dp3 = std::max(dp3, dp2-prices[i]);
    dp4 = std::max(dp4, dp3+prices[i]);
  }
  return std::max(0, std::max(std::max(dp1,dp2), std::max(dp3, dp4)));
}

