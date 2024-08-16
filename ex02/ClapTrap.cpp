#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &newname)
{
	name = newname;
	hitpoints = 10;
	energypoints = 10;
	attackdamage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	name = old.name;
	hitpoints = old.hitpoints;
	energypoints = old.energypoints;
	attackdamage = old.attackdamage;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old)
{
	if (this != &old)
	{
		this->name = old.name;
		this->hitpoints = old.hitpoints;
		this->energypoints = old.energypoints;
		this->attackdamage = old.attackdamage;
	}
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << this->name << " cannot attack anymore" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " takes damage for " << amount << " hitpoints!" << std::endl;
		hitpoints = amount >  (unsigned)hitpoints ? 0 : hitpoints - amount;
	}
	else
	{
		std::cout << this->name << " has no hitpoints left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " is getting " << amount << " hitpoints back!" << std::endl;
		energypoints--;
		hitpoints += amount;
	}
	else
	{
		std::cout << this->name << " cannot heal anymore!" << std::endl;
	}

}