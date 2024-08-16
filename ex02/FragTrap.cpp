#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &newname) : ClapTrap(newname)
{
	name = newname;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
	std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old) : ClapTrap(old)
{
	name = old.name;
	hitpoints = old.hitpoints;
	energypoints = old.energypoints;
	attackdamage = old.attackdamage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &old)
{
	if (this != &old)
	{
		this->name = old.name;
		this->hitpoints = old.hitpoints;
		this->energypoints = old.energypoints;
		this->attackdamage = old.attackdamage;
	}
	std::cout << "FragTrap Assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "HighFive from " + name << std::endl;
}