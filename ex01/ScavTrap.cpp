#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setName("default");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
	setName(scav_trap.getName());
	setHitPoints(scav_trap.getHitpoints());
	setEnergyPoints(scav_trap.getEnergyPoints());
	setAttackDamage(scav_trap.getAttackDamage());
	std::cout << "ScavTrap assignment operator" << std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
