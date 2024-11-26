#include <string>
#include "Data.hpp"
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

class Serializer {

private: 
  Serializer();
  Serializer(const Serializer &rhs);
  Serializer &operator=(const Serializer &rhs);
  virtual ~Serializer();

public:
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);

};

#endif 
