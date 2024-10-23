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
	scav_trap2.takeDamage(15);
	scav_trap2.beRepaired(5);
	scav_trap2.attack("enemy2");
	scav_trap3.attack("enemy3");
	scav_trap3.attack("enemy4");
	scav_trap3.attack("enemy5");
	scav_trap3.attack("enemy6");
	scav_trap3.attack("enemy7");
	scav_trap3.attack("enemy8");
	scav_trap3.attack("enemy9");
	scav_trap3.attack("enemy10");
	scav_trap3.attack("enemy11");
	scav_trap3.attack("enemy12");
	scav_trap3.attack("enemy13");
	scav_trap.guardGate();
	return 0;
}
