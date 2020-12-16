#include <iostream>
#include <vector>
#include "src/DFS.h"

int main() {
  std::vector<std::vector<int>> graph = std::vector<std::vector<int>>({{1,2},{1,3},{2,3}});
  DFS d;
  std::cout << d.possibleBipartition(3, graph) << '\n';
}
