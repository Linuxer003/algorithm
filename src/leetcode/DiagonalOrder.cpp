//
// Created by wgh on 2020/12/11.
//

#include "DiagonalOrder.h"
#include <unordered_map>

std::vector<int> DiagonalOrder::findDiagonalOrder(std::vector<std::vector<int>> &nums) {
  int n = nums.size();
  std::unordered_map<int,std::vector<int>> m;
  int len = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < nums[i].size(); ++j) {
      m[i+j].push_back(nums[i][j]);
    }
  }
  std::vector<int> ans;
  for (int i = 0; i < m.size(); ++i){
    for (int j = m[i].size()-1; j >= 0; --j) {
      ans.push_back(m[i][j]);
    }
  }
  return ans;
}
