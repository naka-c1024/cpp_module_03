#include "DiamondTrap.hpp"
#include <iostream>
// • Name, which is passed as parameter to a constructor
// • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
// • Hit points (FragTrap)
// • Energy points (ScavTrap)
// • Attack damage (FragTrap)
// • attack() (Scavtrap)
DiamondTrap::DiamondTrap()
{
	this->_name = "diamond_man";
	ClapTrap::_name = _name + "_clap_name";
	this->_hit_points = FragTrap::_FT_hit_points;
	this->_energy_points = ScavTrap::_ST_energy_points;
	this->_attack_damage = FragTrap::_FT_attack_damage;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		ClapTrap::_name = other._name + "_clap_name";
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hit_points = FragTrap::_FT_hit_points;
	this->_energy_points = ScavTrap::_ST_energy_points;
	this->_attack_damage = FragTrap::_FT_attack_damage;
	std::cout << "DiamondTrap: string constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name;
	std::cout << " & ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::print_info()
{
	whoAmI();
	std::cout << "hit points: " << this->_hit_points << std::endl;
	std::cout << "energy points: " << this->_energy_points << std::endl;
	std::cout << "attack damage: " << this->_attack_damage << std::endl;
}