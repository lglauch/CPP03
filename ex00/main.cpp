#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Peter("Peter");
	ClapTrap Hans("Hans");

	Hans = Peter;
	Peter.attack("Enemy");
	Peter.beRepaired(5);
	Peter.takeDamage(10);
	Peter.attack("Enemy");

	Hans.attack("Enemy vs Hans");

}