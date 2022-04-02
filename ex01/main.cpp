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
	a.takeDamage(30);
	a.attack("tarou");
	a.guardGate();
	std::cout << std::endl;

	b.attack("jirou");
	b.beRepaired(100);
	b.takeDamage(110);
	b.beRepaired(100);
	b.guardGate();
	std::cout << std::endl;

	c.attack("abc");
	c.beRepaired(100);
	c.takeDamage(110);
	c.beRepaired(100);
	c.guardGate();
	std::cout << std::endl;

	return 0;
}
