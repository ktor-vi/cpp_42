#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"
#include <iostream>

int main(void)
{
  Data original = { "vphilipp", 27 };
	uintptr_t tmp = Serializer::serialize( &original );
	Data* copy = Serializer::deserialize( tmp );

	std::cout << original.str << " - " << copy->str << std::endl;
	std::cout << original.value << " - " << copy->value << std::endl;

	return (0);
}

