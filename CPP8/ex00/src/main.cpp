#include "../includes/easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main(void) {
  std::vector<int> vec(3);

  vec[2] = 3;
  try {
    std::cout << "Index is : " << easyfind(vec, 2) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::deque<int> deq(5);

  deq[4] = 3;
  try {
    std::cout << "Index is : " << easyfind(deq, 3) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::list<int> list(3);

  list.push_back(3);
  try {
    std::cout << "Index is : " << easyfind(list, 3) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
