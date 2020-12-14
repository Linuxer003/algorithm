//
// Created by wgh on 2020/12/14.
//

#include "GroupAnagrams.h"
#include <algorithm>
#include <map>
std::vector<std::vector<std::string>> GroupAnagrams::groupAnagrams(std::vector<std::string> &strs) {
  std::map<std::string, std::vector<std::string>> groups;
  for (std::string value : strs){
    std::string s = value;
    std::sort(s.begin(), s.end());
    groups[s].push_back(value);
  }
  std::vector<std::vector<std::string>> res;
  for (auto& value : groups) {
    res.push_back(value.second);
  }
  return res;
}
