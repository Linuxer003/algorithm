#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include "src/DFS.h"
#include "src/DP.h"
#include "src/BFS.h"
#include "src/Bits.h"

int main() {
  Bits b;
  std::string s = "abcd";
  std::string t = "abcde";
  std::cout << b.findTheDifference(s, t) << '\n';
}
