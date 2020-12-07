//
// Created by 王国洪 on 2020/12/7.
//

#include "minestDiffTime.h"

int minestDiffTime::findMinDifference(std::vector<std::string> &timePoints) {
  int n = timePoints.size();
  std::vector<int> mArray(n);
  for (int i = 0; i < n; i++){
    mArray[i] = std::stoi(timePoints[i].substr(0,2)) * 60 + std::stoi(timePoints[i].substr(3,2));
  }
  std::sort(mArray.begin(), mArray.end());
  int ans = 0xfff;
  for (int i = 1; i < mArray.size(); i++){
    if (mArray[i] - mArray[i-1] < ans){
      ans = mArray[i] - mArray[i-1];
    }
  }
  return std::min(ans, mArray[0]+1440-mArray[n-1]);
}
