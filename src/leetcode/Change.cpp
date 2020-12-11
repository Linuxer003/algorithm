//
// Created by wgh on 2020/12/10.
//
#include <iostream>
#include "Change.h"
#include <unordered_map>
bool Change::lemonadeChange(std::vector<int> &bills) {
  int five = 0, ten = 0;
  for (int value : bills){
    switch (value) {
      case 5:
        five++;
        break;
      case 10:
        if (five > 0){
          five--;
          ten++;
          break;
        } else{
          return false;
        }
      case 20:
        if (five > 0 && ten > 0){
          five--;
          ten--;
          break;
        } else if (five > 2){
          five -= 3;
          break;
        } else{
          return false;
        }
      default:
        return false;
    }
  }
  return true;
}
