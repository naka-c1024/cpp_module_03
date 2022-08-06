#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap a;
	DiamondTrap b("hoge");
	DiamondTrap c(b);
	std::cout << std::endl;

	a.print_info();
	b.print_info();
	c.print_info();
	std::cout << std::endl;

	a.attack("hanako");
	a.beRepaired(20);
	a.takeDamage(30);
	a.attack("tarou");
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	std::cout << std::endl;

	b.attack("jirou");
	b.beRepaired(100);
	b.takeDamage(110);
	b.beRepaired(100);
	b.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	std::cout << std::endl;

	c.attack("abc");
	c.beRepaired(100);
	c.takeDamage(110);
	c.beRepaired(100);
	c.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	std::cout << std::endl;

	return 0;
}
