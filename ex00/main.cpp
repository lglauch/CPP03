#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Peter("Peter");
	ClapTrap Hans("Hans");

	Hans = Peter;
	Peter.attack("Enemy");
	Peter.takeDamage(9);
	Peter.beRepaired(5);
	Peter.attack("Enemy");
	Peter.takeDamage(9);
	Peter.takeDamage(9);

	Hans.attack("Enemy vs Hans");

}