#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &newname)
{
	name = newname;
	hitpoints = 10;
	energypoints = 10;
	attackdamage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	name = old.name;
	hitpoints = old.hitpoints;
	energypoints = old.energypoints;
	attackdamage = old.attackdamage;
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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

}