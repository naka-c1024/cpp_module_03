#include "ClapTrap.hpp"
#include <iostream>

// claptrap->ハッタリ->_attack_damageが0

int	main(void)
{
	ClapTrap a;
	ClapTrap b("hoge");
	ClapTrap c("satou");
	std::cout << std::endl;

	a.attack("hanako");
	a.beRepaired(20);
	a.takeDamage(30);
	a.attack("tarou");
	std::cout << std::endl;

	b.attack("jirou");
	b.beRepaired(100);
	b.takeDamage(120);
	b.beRepaired(100);
	std::cout << std::endl;

	for (size_t i = 0; i < 10; i++)
		c.attack("hehe");
	c.attack("hehe");
	std::cout << std::endl;
	return 0;
}
