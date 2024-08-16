#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	FragTrap(const std::string &newname);
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &old);
	~FragTrap();
	
	void highFivesGuys();
};


#endif