#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav_trap("Alpha");
	ScavTrap scav_trap2(scav_trap);
	ScavTrap scav_trap3;

	scav_trap3 = scav_trap2;

	scav_trap.attack("enemy1");
	scav_trap.takeDamage(5);
	scav_trap.beRepaired(5);
	scav_trap.guardGate();
	return 0;
}
