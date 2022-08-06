#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	this->_name = "unknown";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = other;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap: string constructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "FragTrap " << this->_name
			<< " can't do anything because it has no hit points or energy points left."
			<< std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name
		<< " requests a positive high fives" << std::endl;
}
