//
// Created by 王国洪 on 2020/12/8.
//

#include "DFS.h"

bool DFS::FindK(int sum, int i) {
  if (i == A.size())
    return sum == k;
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
  return false;
}
