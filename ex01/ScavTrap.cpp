#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &newname) : ClapTrap(newname)
{
	name = newname;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old)
{
	name = old.name;
	hitpoints = old.hitpoints;
	energypoints = old.energypoints;
	attackdamage = old.attackdamage;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &old)
{
	if (this != &old)
	{
		this->name = old.name;
		this->hitpoints = old.hitpoints;
		this->energypoints = old.energypoints;
		this->attackdamage = old.attackdamage;
	}
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << " is now in Gatekeeper mode!" << std::endl;
}