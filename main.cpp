#include <iostream>

#include "src/hello.hpp"

int main() {

  int i = 0;
  int j = 2;

  addOne(i);
  std::cout << i << std::endl;
  addOne(i);
  std::cout << i << std::endl;

  std::cout << addOneWithReturn(j) << std::endl;
  std::cout << addOneWithReturn(j) << std::endl;

}
