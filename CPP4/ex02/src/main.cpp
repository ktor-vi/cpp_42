// #include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include <iostream>
int main()
{
  // const Animal bob;  
  const Cat *cat = new Cat();
  const Cat *cat2 =  new Cat(*cat);

  const Dog *dog = new Dog();
  const Dog *dog2 =  new Dog(*dog);

  std::cout << cat->getBrain() << std::endl;
  std::cout << cat2->getBrain() << std::endl;

  std::cout << dog->getBrain() << std::endl;
  std::cout << dog2->getBrain() << std::endl;

  delete cat;
  delete cat2;
  delete dog;
  delete dog2;
  return 0;
}
