#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include <iostream>
int main()
{
  const Animal *arr[4];

  arr[0] = new Dog();
  arr[1] = new Dog();
  arr[2] = new Cat();
  arr[3] = new Cat();

  for(int i = 0; i < 4; i++)
    delete arr[i];
  
  const Cat *cat = new Cat();
  const Cat *cat2 =  new Cat(*cat);

  std::cout << cat->getBrain() << std::endl;
  std::cout << cat2->getBrain() << std::endl;

  delete cat;
  delete cat2;
  return 0;
}
