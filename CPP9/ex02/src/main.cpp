#include "../includes/PmergeMe.hpp"
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <list>
#include <vector>

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "Error" << std::endl;
    return 1;
  }

  std::vector<int> arr;
  std::list<int> lst;

  for (int i = 1; i < argc; i++) {
    if (!strpbrk(argv[i], "0123456789")) {
      std::cout << "Error" << std::endl;
      return 1;
    }
    arr.push_back(atoi(argv[i]));
    lst.push_back(atoi(argv[i]));
  }

  std::cout << "Before : ";
  for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  std::clock_t vstart = std::clock();
  vec_ford_johnson_sort(arr);
  std::clock_t vend = std::clock();

  std::clock_t lstart = std::clock();
  lst_ford_johnson_sort(lst);
  std::clock_t lend = std::clock();

  std::cout << "After : ";
  for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  std::cout << "Time to process a range of " << argc - 1
            << " elements with std::vector "
            << (vend - vstart) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
  std::cout << "Time to process a range of " << argc - 1
            << " elements with std::list "
            << (lend - lstart) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;

  return 0;
}
