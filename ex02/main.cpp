#include "FlagTrap.hpp"

int main()
{
	FlagTrap flag_trap("alpha");
	FlagTrap flag_trap2(flag_trap);
	FlagTrap flag_trap3;

	flag_trap3 = flag_trap2;
	flag_trap.attack("enemy1");
	flag_trap.takeDamage(5);
	flag_trap.beRepaired(5);
	flag_trap.highFivesGuys();
	return (0);
}
