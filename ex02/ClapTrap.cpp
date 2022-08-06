#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("unknown"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = other;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap: string constructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name
			<< " can't do anything because it has no hit points or energy points left."
			<< std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	(this->_energy_points--);
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name
			<< " can't do anything because it has no hit points or energy points left."
			<< std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " took "
		<< amount << " points of damage!" << std::endl;
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else
		this->_hit_points = 0;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name
			<< " can't do anything because it has no hit points or energy points left."
			<< std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself, it gets "
		<< amount << " hit points back" << std::endl;
	this->_hit_points += amount;
	(this->_energy_points--);
}
