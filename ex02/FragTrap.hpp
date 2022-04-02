#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);

	FragTrap(std::string name);

	void highFivesGuys(void);
};

#endif /* FRAGTRAP_HPP */
