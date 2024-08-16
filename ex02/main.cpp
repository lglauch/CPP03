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
	Peter.takeDamage(10);
	Hans.beRepaired(5);
	Hans.takeDamage(10);
	Hans.attack("Enemy");
	Hans.guardGate();
	Dieter.beRepaired(3);
	Dieter.takeDamage(4);
	Dieter.highFivesGuys();
}