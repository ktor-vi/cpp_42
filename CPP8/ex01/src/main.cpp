#include "../includes/Span.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits.h>
int main() {
  Span sp = Span(10);

  sp.addNumber(9);
  sp.addNumber(11);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);


  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  Span sp2 = Span(10000);
    std::vector<int> values(10000);
 std::srand(time(0)); 

    for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) {
        *it = std::rand() % INT_MAX; 
    }

  try {
    sp2.addNumber(values.begin(), values.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
