//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#include "Squad.hpp"

Squad::Squad(void) {
	count = 0;
}

Squad::~Squad(void) {
	for(int index = 0; index < this->count; index++) {
		delete this->squadron[index];
	}
	delete [] this->squadron;
}

Squad &Squad::operator=(Squad const &rhs) {
	if (this != &rhs) {
		ISpaceMarine ** tmp = new ISpaceMarine * [rhs.count];
		*tmp = NULL;
		for (int i = 0; i < this->count; i++) {
			delete this->squadron[i];
		}
		for(int i = 0; i < rhs.count; i++) {
			tmp[i] = rhs.squadron[i]->clone();
		}
		this->count = rhs.count;
		delete [] this->squadron;
		this->squadron = tmp;
	}
	return *this;
}

Squad::Squad(Squad const &src) {
	*this = src;
}

ISpaceMarine * Squad::getUnit(int index) const {
	if (index >=0 && index < this->count)
		return squadron[index];
	else
		return NULL;
}

int 			Squad::push(ISpaceMarine * newbie) {
	if (newbie) {
		int index;
		for (index = 0; index < this->count; index++) {
			if (this->squadron[index] == newbie) {
				break;
			}
		}
		if (index == this->count) {
			ISpaceMarine ** tmpSquad = new ISpaceMarine * [index + 1];
			for (int i = 0; i < this->count; i++) {
				tmpSquad[i] = this->squadron[i];
			}
			tmpSquad[index] = newbie;
			this->count++;
			delete [] this->squadron;
			this->squadron = tmpSquad;
		}
	}
	return this->count;
}

int 			Squad::getCount() const { return this->count; }
