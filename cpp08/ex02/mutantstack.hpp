#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		virtual	~MutantStack() {}
		class iterator {
			private:
				T* it;
			public:
			iterator(T* tmp): it(tmp) {}
			T operator*() {
				return *it;
			}
			bool operator!=(const iterator &cmp) {
				return this->it != cmp.it;
			}
			bool operator==(const iterator &cmp) {
				return this->it == cmp.it;
			}
			iterator& operator++() {
				it--;
				return *this;
			}
			iterator operator++(int) {
				iterator tmp = it;
				--it;
				return tmp;
			}
			iterator& operator--() {
				it++;
				return *this;
			}
			iterator operator--(int) {
				iterator tmp = it;
				++it;
				return tmp;
			}
		};
		MutantStack<T>::iterator begin() {
			return iterator(&this->top());
		}
		MutantStack<T>::iterator end() {
			return iterator(&this->top() - this->size());
		}
};

#endif
