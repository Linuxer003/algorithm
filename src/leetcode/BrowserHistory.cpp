//
// Created by 王国洪 on 2020/12/9.
//

#include "BrowserHistory.h"

BrowserHistory::BrowserHistory(std::string homepage) {
  history.push_back(homepage);
  index = 0;
//  for (int i = 0; i < history.size(); ++i) {
//    std::cout << history[i] << " ";
//  }
//  std::cout << '\n';
}

void BrowserHistory::visit(std::string url) {
  if (index == history.size()-1){
    history.push_back(url);
    index++;
  } else{
    history[++index] = url;
    // 这里需要把history的大小提前弄出来，因为在循环过程中size是变化的。
    int s = history.size();
    for (int i = index+1; i < s; i++){
      history.pop_back();
    }
  }
//  for (int i = 0; i < history.size(); ++i) {
//    std::cout << history[i] << " ";
//  }
//  std::cout << '\n';
}

std::string BrowserHistory::back(int steps) {
  if (index - steps < 0){
    index = 0;
  } else{
    index -= steps;
  }
//  for (int i = 0; i < history.size(); ++i) {
//    std::cout << history[i] << " ";
//  }
//  std::cout << '\n';
  return history[index];
}

std::string BrowserHistory::forward(int steps) {
  if (index + steps > history.size()-1){
    index = (int)history.size()-1;
  } else{
    index += steps;
  }
//  for (int i = 0; i < history.size(); ++i) {
//    std::cout << history[i] << " ";
//  }
//  std::cout << '\n';
  return history[index];
}


