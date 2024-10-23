#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "FlagTrap default constructor" << std::endl;
	setName("FlagTrap");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FlagTrap::FlagTrap(const std::string name)
{
	std::cout << "FlagTrap constructor" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FlagTrap::FlagTrap(const FlagTrap &flagTrap) : ClapTrap(flagTrap)
{
	std::cout << "FlagTrap copy constructor" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &flagTrap)
{
	setName(flagTrap.getName());
	setHitPoints(flagTrap.getHitpoints());
	setEnergyPoints(flagTrap.getEnergyPoints());
	setAttackDamage(flagTrap.getAttackDamage());
	std::cout << "FlagTrap assignment operator" << std::endl;
	return (*this);
}

void FlagTrap::highFivesGuys()
{
	std::cout << "FlagTrap " << getName() << " is requesting a high five" << std::endl;
}
