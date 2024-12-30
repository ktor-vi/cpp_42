#include <stdexcept>
#include <algorithm>
template <typename T> int easyfind(T container, int to_find) {
  
    typename T::iterator it = std::find(container.begin(), container.end(), to_find);

    if(it != container.end())
      return std::distance(container.begin(), it);
    else
      throw std::runtime_error("No match found");
}
