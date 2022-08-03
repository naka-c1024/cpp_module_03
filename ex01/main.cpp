#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap a;
	ScavTrap b("hoge");
	ScavTrap c(b);
	std::cout << std::endl;

	a.attack("hanako");
	a.beRepaired(20);
	a.attack("tarou");
	a.takeDamage(1000);
	a.attack("hito");
	std::cout << std::endl;

	b.attack("jirou");
	b.takeDamage(99);
	b.beRepaired(99);
	b.guardGate();
	std::cout << std::endl;

	for (size_t i = 0; i < 50; i++)
		c.attack("hehe");
	c.attack("hehe");
	std::cout << std::endl;

	return 0;
}
