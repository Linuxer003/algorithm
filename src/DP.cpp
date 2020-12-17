//
// Created by wgh on 2020/12/12.
//
#include <iostream>
#include "DP.h"


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
  int sell = 0, buy = 0;
  int N = prices.size();
  std::vector<int> sells, buys;
  for (int i = 0; i < N; ++i) {
    if (sell < buy+prices[i]){
      sell = buy+prices[i];
      sells.push_back(i);
    }
    if (buy < sell - prices[i]){
      buy = sell - prices[i];
      buys.push_back(i);
    }
  }
}

