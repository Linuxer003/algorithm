//
// Created by wgh on 2020/12/15.
//

#include "IncreaseDigit.h"
#include <string>


/**
 * 找到 N 中该减一的那一位，后面全变为 9.
 * @param N
 * @return
 */
int IncreaseDigit::monotoneIncreasingDigits(int N) {
  std::string s = std::to_string(N);
  int s_size = s.size();
  int index = 0;
  while (s[index] <= s[index+1] && index < s_size - 1)
    index ++;
  if (index == s_size - 1)
    return N;
  for (int i = index; i >= 0 ; --i) {
    if (i > 0 && s[i-1] <= s[i]-1){
      s[i] -= 1;
      index = i;
      break;
    } else if (i == 0){
      s[i] -= 1;
      index = i;
      break;
    }
  }
  for (int i = index+1; i < s_size; ++i) {
    s[i] = '9';
  }
  return std::atoi(s.c_str());
}
