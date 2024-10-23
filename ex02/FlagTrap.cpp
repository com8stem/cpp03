#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "\033[33mFlagTrap\033[0m default constructor" << std::endl;
	setName("FlagTrap");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FlagTrap::FlagTrap(const std::string name)
{
	std::cout << "\033[33mFlagTrap\033[0m constructor" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FlagTrap::FlagTrap(const FlagTrap &flagTrap) : ClapTrap(flagTrap)
{
	std::cout << "\033[33mFlagTrap\033[0m copy constructor" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "\033[33mFlagTrap\033[0m destructor" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &flagTrap)
{
	setName(flagTrap.getName());
	setHitPoints(flagTrap.getHitpoints());
	setEnergyPoints(flagTrap.getEnergyPoints());
	setAttackDamage(flagTrap.getAttackDamage());
	std::cout << "\033[33mFlagTrap\033[0m assignment operator" << std::endl;
	return (*this);
}

void FlagTrap::highFivesGuys()
{
	std::cout << "\033[33mFlagTrap\033[0m " << getName() << " is requesting a high five" << std::endl;
}
