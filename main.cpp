#include <iostream>
#include <vector>
#include "src/leetcode/minestDiffTime.h"

int main() {
  minestDiffTime m;
  std::vector<std::string> s = {"23:59","00:00"};
  std::cout << m.findMinDifference(s) << std::endl;
}
