//
// Created by 王国洪 on 2020/12/8.
//

#include "DFS.h"


bool DFS::FindK(int sum, int i) {
  if (i == A.size())
    return sum == tarSum;
  if (FindK(sum, i + 1)) return true;
  if (FindK(sum + A[i], i + 1)) return true;
  return false;
}

int DFS::LakeCount(std::vector<std::vector<char>>& field, int x, int y) {
  // 将现在所在位置置换为.
  field[x][y] = '.';
  // 循环遍历移动的八个方向
  for (int dx = -1; dx <= 1; ++dx) {
    for (int dy = -1; dy <= 1; ++dy) {
      int nx = x+dx, ny = y+dy;
      if (0 <= nx && nx < field.size() && 0 <= ny && ny < field[0].size() && field[nx][ny] == 'W') LakeCount(field, nx, ny);
    }
  }
  return 0;
}

bool DFS::possibleBipartition(int N, std::vector<std::vector<int>> &dislikes) {
  std::vector<std::vector<int>> graph =  std::vector<std::vector<int>>(N+1, std::vector<int>());
  std::vector<int> color = std::vector<int>(N+1);
  for (auto& value : dislikes){
    graph[value[0]].push_back(value[1]);
    graph[value[1]].push_back(value[0]);
  }
  for (int i = 1; i <= N; ++i) {
    if (color[i] != 0)
      continue;
    if (!dfsBi(i, 1, color, graph))
      return false;
  }
  return true;
}

bool DFS::dfsBi(int index, int c, std::vector<int> &color, std::vector<std::vector<int>> &graph) {
  if (color[index] != 0)
    return color[index] == c;
  color[index] = c;
  for (auto& value : graph[index]) {
    if (!dfsBi(value, -c, color, graph))
      return false;
  }
  return true;
}

int DFS::maxProfit(std::vector<int> &prices) {
  if (prices.empty())
    return 0;

  return dfsProfit(prices, 0, 0, 0);
}

int DFS::dfsProfit(std::vector<int> &prices, int index, int state, int k) {
  if (index == prices.size() || k == 2)
    return 0;
  // 分别记录针对当天股价采取 不动、买、卖的收益
  int a = 0, b = 0, c = 0;
  a = dfsProfit(prices, index+1, state, k);
  if (state == 0){
    b = dfsProfit(prices, index+1, 1, k)-prices[index];
  } else
    c = dfsProfit(prices, index+1, 0, k+1)+prices[index];
  return std::max(std::max(a,b),c);
}


