//
// Created by 王国洪 on 2020/12/7.
//

#include "reverseMatric.h"

int reverseMatric::matrixScore(std::vector<std::vector<int>> &A) {
  // 结果值
  int ans = 0;
  int m = A.size();
  if (m == 0){
    return 0;
  }
  int n = A[0].size();
  // 翻转第一列零元素
  for (int i = 0; i < m; i++){
    if (A[i][0] == 0){
      for (int j = 0; j < n; j++){
        if (A[i][j] == 0){
          A[i][j] = 1;
        } else{
          A[i][j] = 0;
        }
      }
    }
  }
  // 第一列的贡献
  ans += m * (1 << (n-1));
  // 翻转零元素大于一半的列，并同时统计除第一列，每一列的贡献

  for (int i = 1; i < n; i++){
    int count = 0;
    for (int j = 0; j < m; j++){
      if (A[j][i] == 1){
        count++;
      }
    }
    if (count >= n-count){
      ans += count * (1 << (n-i-1));
      continue;
    } else{
      ans += (n-count)*(1 << (n-i-1));
    }
    for (int j = 0; j < m; j++){
      if (A[j][i] == 0){
        A[j][i] = 1;
      } else{
        A[j][i] = 0;
      }
    }
  }
  return ans;
}

int reverseMatric::matrixScore2(std::vector<std::vector<int>> &A) {
  int m = A.size();
  if (m == 0){
    return 0;
  }
  int n = A[0].size();
  // 第一列必变换为 1
  int ans = m * (1 << (n-1));
  for (int i = 1; i < n; i++){
    int count = 0;
    for (int j = 0; j < m; j++){
      // 这里统计每一列 1 的个数，因为第一列需要变换为1，所以这里要判断有没有被变换
      if (A[j][0] == 0){
        count += A[j][i];
      } else{
        count += (1-A[j][i]);
      }
    }
    count = std::max(count, m-count);
    ans += count * (1 << (n-i-1));
  }
  return ans;
}
