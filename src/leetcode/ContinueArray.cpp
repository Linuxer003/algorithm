//
// Created by wgh on 2020/12/13.
//

#include "ContinueArray.h"
#include <map>
int ContinueArray::findMaxLength(std::vector<int> &nums) {
  int ans = 0, n = nums.size(), count = 0;
  std::map<int,int> state;
  state[0] = -1;
  for (int i = 0; i < n; ++i) {
    count += nums[i]==0?(-1):1;
    if (state.find(count) != state.end())
      ans = std::max(ans, i-state[count]);
    else
      state[count] = i;
  }
  return ans;
}
