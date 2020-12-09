//
// Created by wgh on 2020/12/8.
//

#include "Break2Fibonacci.h"

std::vector<int> Break2Fibonacci::splitIntoFibonacci(std::string& S) {
  std::vector<int> ans;
  int length = S.size();
  backtrace(ans, S, length, 0, 0, 0);
  return ans;
}

bool Break2Fibonacci::backtrace(std::vector<int>& F, std::string& S, int length, int index, int sum, int prev) {
  if (index == length)
    return F.size() >= 3;
  long cur = 0;
  for (int i = index; i < length; i++){
    if (i > index && S[index] == '0')
      break;
    cur = cur*10 + S[i]-'0';
    if (cur > INT_MAX)
      break;
    if (F.size() >= 2){
      if (cur < sum){
        continue;
      }
      if (cur > sum){
        break;
      }
    }
    F.push_back(cur);
    if (backtrace(F, S, length, i+1, prev+cur, cur))
      return true;
    F.pop_back();
  }
  return false;
}
