#include <ctime>
#include <cstdlib>
#include <iostream>
#include "../includes/Classes.hpp"

Base * generateType(void) {
	int rNum =  std::rand() % 3;
	Base* result  = 0;
	// std::cout << rNum << ": ";
	if (!rNum) {
		result = new A();
	} else if (rNum == 1) {
		result = new B();
	} else if (rNum == 2) {
		result = new C();
	}
	return (result);
}

void identify(Base* p) {
	// std::cout << "ptr id: ";
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a) {
		std::cout << "A" << std::endl;
	} else if (b) {
		std::cout << "B" << std::endl;
	} else if (c) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	// std::cout << "ref id: ";
	try {
		A& a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch (std::exception &e) {
	}
	try {
		B& b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch (std::exception &e) {
	}
	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch (std::exception &e) {
	}
}

int	main( void ) {
	std::srand(std::time(0));
	Base* first = generateType();
	identify(first);
	identify(*first);
	delete first;
	Base* second = generateType();
	identify(second);
	identify(*second);
	delete second;
	Base* third = generateType();
	identify(third);
	identify(*third);
	delete third;
	return (0);
}
