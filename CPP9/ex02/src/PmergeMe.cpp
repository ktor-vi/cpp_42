#include "../includes/PmergeMe.hpp"
#include <algorithm>
#include <list>
#include <vector>

std::vector<size_t> generate_jacobsthal_sequence(size_t n) {
  std::vector<size_t> sequence;
  size_t a = 0, b = 1;
  while (b < n) {
    sequence.push_back(b);
    size_t next = a + 2 * b;
    a = b;
    b = next;
  }
  return sequence;
}

void vec_insert_sorted(std::vector<int> &sorted, int value) {
  std::vector<int>::iterator it =
      std::lower_bound(sorted.begin(), sorted.end(), value);
  sorted.insert(it, value);
}

void vec_ford_johnson_sort(std::vector<int> &arr) {
  size_t n = arr.size();
  if (n <= 1)
    return;

  std::vector<int> minimums, maximums;

  for (size_t i = 0; i + 1 < n; i += 2) {
    if (arr[i] < arr[i + 1]) {
      minimums.push_back(arr[i]);
      maximums.push_back(arr[i + 1]);
    } else {
      minimums.push_back(arr[i + 1]);
      maximums.push_back(arr[i]);
    }
  }

  if (n % 2 != 0) {
    vec_insert_sorted(minimums, arr.back());
  }

  for (size_t i = 1; i < minimums.size(); ++i) {
    int key = minimums[i];
    size_t j = i;
    while (j > 0 && minimums[j - 1] > key) {
      minimums[j] = minimums[j - 1];
      --j;
    }
    minimums[j] = key;
  }

  std::vector<size_t> jacobsthal =
      generate_jacobsthal_sequence(maximums.size());

  for (size_t k = 0; k < jacobsthal.size(); ++k) {
    size_t i = jacobsthal[k];
    if (i < maximums.size()) {
      vec_insert_sorted(minimums, maximums[i]);
    }
  }

  arr = minimums;
}

void lst_insert_sorted(std::list<int> &sorted, int value) {
  std::list<int>::iterator it = sorted.begin();
  while (it != sorted.end() && *it < value) {
    ++it;
  }
  sorted.insert(it, value);
}

void lst_ford_johnson_sort(std::list<int> &lst) {
  size_t n = lst.size();
  if (n <= 1)
    return;

  std::list<int> minimums, maximums;

  std::list<int>::iterator it = lst.begin();
  while (it != lst.end()) {
    int first = *it;
    ++it;
    if (it != lst.end()) {
      int second = *it;
      ++it;
      if (first < second) {
        minimums.push_back(first);
        maximums.push_back(second);
      } else {
        minimums.push_back(second);
        maximums.push_back(first);
      }
    } else {
      lst_insert_sorted(minimums, first);
    }
  }

std::list<int>::iterator it1 = minimums.begin();
++it1;
for (; it1 != minimums.end(); ++it1) {
    int key = *it1;
    std::list<int>::iterator it2 = it1;

    while (it2 != minimums.begin()) {
        std::list<int>::iterator it_prev = it2;
        --it_prev; 
        if (*it_prev <= key) {
            break;
        }

        *it2 = *it_prev; 
        --it2;
    }

    *it2 = key; 
  }

  std::vector<size_t> jacobsthal =
      generate_jacobsthal_sequence(maximums.size());

  for (size_t k = 0; k < jacobsthal.size(); ++k) {
    size_t i = jacobsthal[k];
    if (i < maximums.size()) {
      std::list<int>::iterator max_it = maximums.begin();
      std::advance(max_it, i);
      lst_insert_sorted(minimums, *max_it);
    }
  }

  lst = minimums;
}
