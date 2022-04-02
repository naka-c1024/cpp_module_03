#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator=(ClapTrap const &other);

	ClapTrap(std::string name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
};

#endif /* CLAPTRAP_HPP */
