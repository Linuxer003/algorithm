//
// Created by wgh on 2020/12/15.
//

#include "findSumZero.h"

std::vector<int> findSumZero::sumZero(int n) {
  std::vector<int> ans;
  if (n % 2 == 1)
    ans.push_back(0);
  n /= 2;
  for (int i = 0; i < n; ++i) {
    ans.push_back(i+1);
    ans.push_back(-(i+1));
  }
  return ans;
}
