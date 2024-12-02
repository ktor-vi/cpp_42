#include <stdexcept>
template <typename T> int easyfind(T container, int to_find) {
  int i = 0;
  typename T::const_iterator it;
  typename T::const_iterator ite = container.end();
  for (it = container.begin(); it != ite; it++) {
    if (*it == to_find)
      return i;
    i++;
  }
  throw std::runtime_error("No match found");
}
