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

void	FragTrap::attack(const std::string &target)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << this->name << " cannot attack anymore" << std::endl;
	}
}


void	FragTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout << "FragTrap " << name << " takes damage for " << amount << " hitpoints!" << std::endl;
		hitpoints = amount >  (unsigned)hitpoints ? 0 : hitpoints - amount;
	}
	else
	{
		std::cout << this->name << " has no hitpoints left!" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (energypoints > 0 && hitpoints > 0)
	{
		std::cout << "FragTrap " << name << " is getting " << amount << " hitpoints back!" << std::endl;
		energypoints--;
		hitpoints += amount;
	}
	else
	{
		std::cout << this->name << " cannot heal anymore!" << std::endl;
	}

}