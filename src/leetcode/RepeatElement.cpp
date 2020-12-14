//
// Created by wgh on 2020/12/13.
//

#include "RepeatElement.h"
#include <map>
bool RepeatElement::containsDuplicate(std::vector<int> &nums) {
  std::map<int, int> count;
  for (int v : nums){
    if (count.find(v) == count.end()){
      count[v]=1;
    } else{
      return true;
    }
  }
  return false;
}
