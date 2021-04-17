//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
protected:
	int			hp;
	std::string type;
	Enemy(void);
public:
	virtual ~Enemy(void);
	Enemy & operator=(Enemy const &rhs);
	Enemy(Enemy const &src);

	Enemy(int hp, std::string const & type);

	virtual void	takeDamage(int dmg);
	void			statusCheck();
	//getters
	int			getHP() const ;
	std::string getType() const ;
};

#endif //CPP04_ENEMY_HPP
