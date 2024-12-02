#include "../includes/Span.hpp"
#include <climits>
Span::Span(int maxNumbers) {
  this->maxNumbers = maxNumbers;
  this->size = 0;
}
Span::~Span() {}
Span::Span(const Span &rhs) {
  this->addNumber(rhs.vec);
  this->maxNumbers = rhs.maxNumbers;
}
Span &Span::operator=(const Span &rhs) {
  if (this != &rhs) {
    this->vec.clear();
    this->addNumber(rhs.vec);
    this->maxNumbers = rhs.maxNumbers;
  }
  return *this;
}

const char *Span::MaxNumbersException::what() const throw() {
  return ("Max Numbers exceeded");
}

const char *Span::MinNumbersException::what() const throw() {
  return ("Not enough numbers");
}

void Span::addNumber(int n) {
  this->vec.push_back(n);
  this->size++;
  if (this->size > this->maxNumbers)
    throw MaxNumbersException();
}

int Span::shortestSpan() {
  if (this->size < 2)
    throw MinNumbersException();
  int res = INT_MAX;
  std::vector<int>::const_iterator it;
  std::vector<int>::const_iterator ite = this->vec.end();
  std::vector<int>::const_iterator itb;
  std::vector<int>::const_iterator itbe = this->vec.end();
  for (it = this->vec.begin(); it != ite; it++) {
    for (itb = this->vec.begin(); itb != itbe; itb++) {
      if (abs(*it - *itb) < res && *it != *itb)
        res = abs(*it - *itb);
    }
  }
  return res;
}

int Span::longestSpan() {
  if (this->size < 2)
    throw MinNumbersException();
  int res = 0;
  std::vector<int>::const_iterator it;
  std::vector<int>::const_iterator ite = this->vec.end();
  std::vector<int>::const_iterator itb;
  std::vector<int>::const_iterator itbe = this->vec.end();
  for (it = this->vec.begin(); it != ite; it++) {
    for (itb = this->vec.begin(); itb != itbe; itb++) {
      if (abs(*it - *itb) > res)
        res = abs(*it - *itb);
    }
  }
  return res;
}
