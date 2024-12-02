#include "../includes/Span.hpp"
#include <iostream>

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

  std::vector<int> lst;
  lst.push_back(-2);

  try {
    sp.addNumber(lst);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  Span sp2 = Span(1);
  sp2.addNumber(lst);
  try {
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
