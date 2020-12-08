#include <iostream>
#include "src/leetcode/ArrayBroke2Fibonacci.h"

int main() {
  std::string s = "417420815174208193484163452262453871040871393665402264706273658371675923077949581449611550452755";
  ArrayBroke2Fibonacci a;
  auto ans = a.splitIntoFibonacci(s);
  for (auto v : ans){
    std::cout << v << "\n";
  }
}
