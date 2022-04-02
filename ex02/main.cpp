#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap a;
	FragTrap b("hoge");
	FragTrap c(b);
	std::cout << std::endl;

	a.attack("hanako");
	a.beRepaired(20);
	a.takeDamage(30);
	a.attack("tarou");
	a.highFivesGuys();
	std::cout << std::endl;

	b.attack("jirou");
	b.beRepaired(100);
	b.takeDamage(110);
	b.beRepaired(100);
	b.highFivesGuys();
	std::cout << std::endl;

	c.attack("abc");
	c.beRepaired(100);
	c.takeDamage(110);
	c.beRepaired(100);
	c.highFivesGuys();
	std::cout << std::endl;

	return 0;
}
