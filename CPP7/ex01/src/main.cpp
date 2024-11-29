#include "../includes/iter.hpp"

void addOne(int &x)
{
  x += 1;
}

void addOneD(double &x)
{
  x += 1;
}

int main(void)
{
  int arr[] = {1,2,3,4,5};
  long len = 5;

  iter<int, long, void(*)(int)>(arr, len, printEl<int>);
  iter<int, long, void(*)(int&)>(arr, len, addOne);
  std::cout << std::endl;
  iter<int, long, void(*)(int)>(arr, len, printEl<int>);
  std::cout << std::endl;

  double arr2[] = {1.1,2.2,3.3,4.4,5.5};
  int len2 = 5;

  iter<double, int, void(*)(double)>(arr2, len2, printEl<double>);
  iter<double, int, void(*)(double&)>(arr2, len2, addOneD);
  std::cout << std::endl;
  iter<double, int, void(*)(double)>(arr2, len2, printEl<double>);
}
