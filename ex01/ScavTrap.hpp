#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap(const std::string &newname);
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &old);
	~ScavTrap();
	
	void guardGate();
	void attack(const std::string &target);
};


#endif