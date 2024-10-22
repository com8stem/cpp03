#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
public:
	FlagTrap();
	FlagTrap(const std::string &name);
	FlagTrap(const FlagTrap &flagTrap);
	~FlagTrap();
	FlagTrap &operator=(const FlagTrap &flagTrap);

	void highFivesGuys();
};

#endif