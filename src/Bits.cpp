//
// Created by wgh on 2020/12/18.
//

#include "Bits.h"

char Bits::findTheDifference(std::string &s, std::string &t) {
  int ans = 0;
  for (auto value : s)
    ans ^= value;
  for (auto value : t)
    ans ^= value;
  return char(ans);
}
