#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
int main() {
  // const Animal *animal = new Animal();
  const Animal *cat = new Cat();
  cat->makeSound();
  delete cat;
}
