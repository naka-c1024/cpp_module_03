#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap &operator=(DiamondTrap const &other);

	DiamondTrap(std::string name);

	void attack(const std::string& target);
	void whoAmI();
private:
	std::string	_name;
};

#endif /* DIAMONDTRAP_HPP */
