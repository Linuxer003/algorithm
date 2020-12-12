//
// Created by wgh on 2020/12/11.
//

#include "Senate.h"
#include <queue>

std::string Senate::PredictPartyVictory(std::string&& senate) {
  int n = senate.size();
  std::queue<int> radiant, dire;
  for (int i = 0; i < n; i++){
    if (senate[i] == 'R')
      radiant.push(i);
    else
      dire.push(i);
  }
  while (!radiant.empty() && !dire.empty()){
    if (radiant.front() < dire.front())
      radiant.push(radiant.front() + n);
    else
      dire.push(dire.front() + n);
    radiant.pop();
    dire.pop();
  }
  if (!radiant.empty())
    return "Radiant";
  else
    return "Dire";
}
