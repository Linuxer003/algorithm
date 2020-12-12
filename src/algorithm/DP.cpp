//
// Created by wgh on 2020/12/12.
//

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

