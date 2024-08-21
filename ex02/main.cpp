#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Peter("Peter");
	ScavTrap Hans("Hans");
	FragTrap Dieter("Dieter");

	Peter.attack("Enemy");
	Hans.attack("Enemy");
	Dieter.attack("Enemy");
	Peter.beRepaired(5);
	Hans.beRepaired(5);
	Dieter.beRepaired(3);
	Peter.takeDamage(10);
	Hans.takeDamage(10);
	Dieter.takeDamage(10);
	Hans.guardGate();
	Dieter.highFivesGuys();
}