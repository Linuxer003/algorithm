#include <iostream>
#include <vector>
#include "src/DFS.h"
#include "src/DP.h"
#include "src/BFS.h"

int main() {
  std::vector<int> prices = {1,3,2,8,4,9};
  int fee = 2;
  std::vector<int> sells, buys = {0};
  DP d;
  d.maxProfit(prices, fee, sells, buys);
}
