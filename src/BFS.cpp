//
// Created by 王国洪 on 2020/12/16.
//

#include "BFS.h"
#include <queue>

bool BFS::possibleBipartition(int N, std::vector<std::vector<int>> &dislikes) {
  std::vector<std::vector<int>> graph = std::vector<std::vector<int>>(N+1, std::vector<int>());
  for (auto& value : dislikes){
    graph[value[0]].push_back(value[1]);
    graph[value[1]].push_back(value[0]);
  }
  std::vector<int> color = std::vector<int>(N+1);
  for (int i = 1; i <= N; ++i) {
    if (color[i] != 0)
      continue;
    std::queue<int> queue = std::queue<int>();
    queue.push(i);
    color[i] = 1;
    while (queue.size()){
      // 这里不能用引用，因为会指向一个以及释放的内存空间
      int head = queue.front();
      queue.pop();
      for (auto& value : graph[head]) {
        if (color[value] == color[head])
          return false;
        if (color[value] != 0)
          continue;
        else
          color[value] = -color[head];
        queue.push(value);
      }
    }
  }
  return true;
}
