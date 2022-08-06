#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	this->_name = "unknown";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = other;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap: string constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't do anything because it has no hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	(this->_energy_points--);
}

void ScavTrap::guardGate(void)
{
	if (this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't do anything because it has no hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap" << this->_name << "is now in Gate keeper mode." << std::endl;
}
