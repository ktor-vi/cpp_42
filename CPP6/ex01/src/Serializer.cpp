#include "../includes/Serializer.hpp"
#include <iostream>
Serializer::Serializer() {
  std::cout << "Serializer constructor." << std::endl;
}

Serializer::~Serializer() {
  std::cout << "Serializer destructor." << std::endl;
}

Serializer::Serializer(const Serializer &rhs) {
  (void)rhs;
  std::cout << "Serializer copy constructor." << std::endl;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
  std::cout << "Serializer copy assignment operator" << std::endl;
  (void)rhs;
  return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
