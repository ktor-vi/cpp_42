#include "../includes/array.hpp"
#include <iostream>

int main(void) {
  Array<int> arr = Array<int>();
  Array<float> arr2 = Array<float>(5);

  std::cout << arr2[2] << std::endl;
  arr2[2] = 2.42f;
  std::cout << arr2[2] << std::endl;
  try {
    arr2[9] = 1.13f;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
