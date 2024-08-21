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

void	ScavTrap::attack(const std::string &target)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << this->name << " cannot attack anymore" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout << "ScavTrap " << name << " takes damage for " << amount << " hitpoints!" << std::endl;
		hitpoints = amount >  (unsigned)hitpoints ? 0 : hitpoints - amount;
	}
	else
	{
		std::cout << this->name << " has no hitpoints left!" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "ScavTrap " << name << " is getting " << amount << " hitpoints back!" << std::endl;
		energypoints--;
		hitpoints += amount;
	}
	else
	{
		std::cout << this->name << " cannot heal anymore!" << std::endl;
	}

}