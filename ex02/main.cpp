#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap scav_trap("beta");
	ScavTrap scav_trap2(scav_trap);
	ScavTrap scav_trap3;
	
	scav_trap3 = scav_trap2;
	scav_trap.attack("enemy2");
	scav_trap.takeDamage(5);
	scav_trap.beRepaired(5);
	scav_trap.guardGate();
	
	return (0);
}
