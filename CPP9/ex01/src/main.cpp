#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Error." << std::endl;
    return 1;
  }

  std::stack<int> numbers;
  std::string expr = argv[1];
  std::string::iterator it = expr.begin();

  while (it != expr.end()) {
    if (*it == ' ') {
      ++it;
      continue;
    }

    if (isdigit(*it)) {
      numbers.push(*it - '0');
    } else {
      if (numbers.size() < 2)
        return 1;

      int b = numbers.top();
      numbers.pop();
      int a = numbers.top();
      numbers.pop();

      switch (*it) {
      case '+':
        numbers.push(a + b);
        break;
      case '-':
        numbers.push(a - b);
        break;
      case '*':
        numbers.push(a * b);
        break;
      case '/':
        if (b == 0)
          return 1;
        numbers.push(a / b);
        break;
      default:
        return 1;
      }
    }
    ++it;
  }

  if (numbers.size() != 1)
    return 1;
  std::cout << numbers.top() << std::endl;
  return 0;
}
