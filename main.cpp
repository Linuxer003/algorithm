#include <iostream>
#include "src/leetcode/BrowserHistory.h"

int main() {
  BrowserHistory b("hdqqhm.com");
  b.visit("yltqsj.com");
  b.forward(1);
  b.back(1);
  b.visit("cyv.com");
  b.visit("vbpvni.com");
  b.visit("opy.com");
  b.visit("kbyzp.com");
  b.back(7);
  b.visit("fchhxaz.com");
  b.back(6);
  b.forward(9);
  b.visit("rg.com");
  b.visit("oemqn.com");
  b.visit("hyqsb.com");
 }
