#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
	std::string name;
	int	hitpoints;
	int energypoints;
	int attackdamage;

	public:
	ClapTrap(std::string &newname);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &old);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif