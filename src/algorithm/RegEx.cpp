//
// Created by wgh on 2020/12/10.
//

#include "RegEx.h"

RegEx::RegEx() {
  state = new std::vector<std::vector<int>>(9, std::vector<int>(5));
  *state = {{0,1,2,-1,7},
            {-1,-1,2,-1,7},
            {8,-1,2,4,3},
            {8,-1,3,4,-1},
            {-1,5,6,-1,-1},
            {-1,-1,6,-1,-1},
            {8,-1,6,-1,-1},
            {-1,-1,3,-1,-1},
            {8,-1,-1,-1,-1}};
}

RegEx::~RegEx() {
  delete state;
}

bool RegEx::isNumber(std::string& s) {
  int ans = 0;
  for (char i : s) {
    if (ans == -1)
      return false;
    if (i ==' '){
      ans = (*state)[ans][0];
    } else if (i == '+' || i == '-'){
      ans = (*state)[ans][1];
    } else if ('0' <= i && i <= '9'){
      ans = (*state)[ans][2];
    } else if (i == 'e'){
      ans = (*state)[ans][3];
    } else if (i == '.'){
      ans = (*state)[ans][4];
    } else{
      return false;
    }
  }
  if (ans == 2 || ans == 3 || ans == 6 || ans == 8)
    return true;
  return false;
}