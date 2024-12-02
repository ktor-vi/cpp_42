#include <vector>

#ifndef SPAN_HPP
#define SPAN_HPP
class Span {
public:
  Span(int maxNumbers);
  ~Span();
  Span(const Span &rhs);
  Span &operator=(const Span &rhs);
  void addNumber(int n);
  int longestSpan();
  int shortestSpan();
  template <typename T> void addNumber(T range) {
    typename T::const_iterator it;
    typename T::const_iterator ite = range.end();
    for (it = range.begin(); it != ite; it++) {
      this->vec.push_back(*it);
      this->size++;
      if (this->size > this->maxNumbers)
        throw MaxNumbersException();
    }
  }
  class MaxNumbersException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class MinNumbersException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

private:
  unsigned int maxNumbers;
  unsigned int size;
  std::vector<int> vec;
};
#endif
