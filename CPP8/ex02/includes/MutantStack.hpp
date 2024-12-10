#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack<T>& other);
	MutantStack<T>& operator=(const MutantStack<T>& other);
	virtual ~MutantStack();

	iterator begin();
	iterator end();
};

template<typename T>
MutantStack<T>::MutantStack() { }

template<typename T>
MutantStack<T>::~MutantStack() { }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return (this->c.begin()); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return (this->c.end()); }

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &rhs) { *this = rhs; }

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs) {
	if (this != &rhs)
		*this = rhs;
	return *this;
}

#endif //
