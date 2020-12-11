#include <iostream>
#include "src/algorithm/RegEx.h"

int main() {
  RegEx r;
  std::string s = "G76";
  std::cout << r.isNumber(s) << '\n';
}
