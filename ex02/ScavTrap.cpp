#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setName("default");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "\033[32mScavTrap\033[0m default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "\033[32mScavTrap\033[0m name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
	std::cout << "\033[32mScavTrap\033[0m copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[32mScavTrap\033[0m destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
	setName(scav_trap.getName());
	setHitPoints(scav_trap.getHitpoints());
	setEnergyPoints(scav_trap.getEnergyPoints());
	setAttackDamage(scav_trap.getAttackDamage());
	std::cout << "\033[32mScavTrap\033[0m assignment operator" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "\033[32mScavTrap\033[0m " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "\033[32mScavTrap\033[0m " << getName() << " is now in Gate keeper mode" << std::endl;
}
