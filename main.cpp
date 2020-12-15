#include <iostream>
#include <vector>
#include "src/leetcode/divDislike.h"

int main() {
  divDislike d;
  std::vector<std::vector<int>> dislike = {{1,2},{1,3},{2,3}};
  std::cout << d.possibleBipartition(3,dislike) << '\n';
}
