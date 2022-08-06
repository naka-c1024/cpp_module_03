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
protected:
	static const unsigned int	_ST_hit_points = 100;
	static const unsigned int	_ST_energy_points = 50;
	static const unsigned int	_ST_attack_damage = 20;
};

#endif /* SCAVTRAP_HPP */
