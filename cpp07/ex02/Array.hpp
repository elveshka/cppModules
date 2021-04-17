#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template< typename T >
class Array {
	private:
		unsigned int	_size;
		T 			*	myarray;
	public:
		Array() {
			this->_size = 0;
			this->myarray = new T[0];
		}
		Array(unsigned int size) {
			this->_size = size;
			this->myarray = new T [size];
			for (unsigned int i = 0; i < size; i++) {
				this->myarray[i] = 0;
			}
		}
		~Array() {
			delete [] this->myarray;
		}
		Array(Array const & src) {
			this->_size = 0;
			this->myarray = new T[0];
			*this = src;
		}
		Array & operator=(Array const & rhs) {
			if (&rhs == this)
				return *this;
			delete [] this->myarray;
			myarray = new T(rhs.size());
			this->_size = rhs.size();
			for (unsigned int i = 0; i < rhs.size(); i++)
				this->myarray[i] = rhs.myarray[i];
			return *this;
		}
		T & operator[](unsigned int i) {
			if (i >= 0 && i < this->_size)
				return *(this->myarray + i);
			else
				throw std::out_of_range("oops");
		}
//getters
		unsigned int	size() const { return this->_size; }
};

template< typename T >
std::ostream & operator<<(std::ostream & o, Array<T> & a) {
	for (unsigned int i = 0; i < a.size(); i++)
	{
		o << a[i] << " ";
	}
	return o;
}
#endif
