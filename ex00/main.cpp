#include "ClapTrap.hpp"

// claptrap->ハッタリ->_attack_damageが0

int	main(void)
{
	ClapTrap a;
	ClapTrap b("hoge");
	ClapTrap c("satou");

	a.attack("hanako");
	a.beRepaired(20);
	a.takeDamage(30);
	a.attack("tarou");

	b.attack("jirou");
	b.beRepaired(100);
	b.takeDamage(120);
	b.beRepaired(100);

	for (size_t i = 0; i < 10; i++)
		c.attack("hehe");
	c.attack("hehe");

	return 0;
}
