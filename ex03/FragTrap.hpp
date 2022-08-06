#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);

	FragTrap(std::string name);

	void highFivesGuys(void);
protected:
	static const unsigned int	_FT_hit_points = 100;
	static const unsigned int	_FT_energy_points = 100;
	static const unsigned int	_FT_attack_damage = 30;
};

#endif /* FRAGTRAP_HPP */
