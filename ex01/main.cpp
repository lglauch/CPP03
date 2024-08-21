#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Peter("Peter");
	ScavTrap Hans("Hans");

	Peter.attack("Enemy");
	Peter.beRepaired(5);
	Peter.takeDamage(10);
	Hans.attack("Enemy");
	Hans.beRepaired(5);
	Hans.takeDamage(10);
	Hans.attack("Enemy");
	Hans.guardGate();
}