#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);

	ScavTrap(std::string name);

	void attack(const std::string& target);
	void guardGate();
};

#endif /* SCAVTRAP_HPP */
