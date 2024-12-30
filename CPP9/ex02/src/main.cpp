#include "../includes/PmergeMe.hpp"

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
  std::chrono::steady_clock::time_point vstart =
      std::chrono::high_resolution_clock::now();
  vec_ford_johnson_sort(arr);
  std::chrono::steady_clock::time_point vend =
      std::chrono::high_resolution_clock::now();

  std::chrono::steady_clock::time_point lstart =
      std::chrono::high_resolution_clock::now();
  lst_ford_johnson_sort(lst);

  std::chrono::steady_clock::time_point lend =
      std::chrono::high_resolution_clock::now();
  std::cout << "After : ";
  for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  std::cout << "Time to process a range of " << argc - 1
            << " elements with std::vector "
            << std::chrono::duration_cast<std::chrono::microseconds>(vend -
                                                                     vstart)
                   .count()
            << " us" << std::endl;
  std::cout << "Time to process a range of " << argc - 1
            << " elements with std::list "
            << std::chrono::duration_cast<std::chrono::microseconds>(lend -
                                                                     lstart)
                   .count()
            << " us" << std::endl;
  return 0;
}
