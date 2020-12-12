#include <iostream>
#include <vector>
#include "src/algorithm/DP.h"

int main() {
  std::vector<int> nums = {3,3,3,2,5};
  DP dp;
  std::cout << dp.wiggleMaxLength(nums) << '\n';
}
