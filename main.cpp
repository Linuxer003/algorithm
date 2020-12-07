#include <iostream>
#include <vector>
#include "src/algorithm/DFS.h"

int main() {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<char>> field(N, std::vector<char>(M));
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; ++j) {
      std::cin >> field[i][j];
    }
    std::cin.get();
  }
  DFS d;
  int ans = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; ++j) {
      if (field[i][j] == 'W'){
        d.LakeCount(field, i, j);
        ans++;
      }
    }
  }
  std::cout << ans << "\n";
}
