#include <iostream>
#include "../includes/Animal.hpp"
// #include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
int main()
{
  const Animal* meta = new Animal();
  const Animal* i = new Dog();
  const Animal* j = new Cat();
  const WrongAnimal* l = new WrongCat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << l->getType() << " " << std::endl;

  j->makeSound();
  meta->makeSound();
  l->makeSound();
  return 0;
}
