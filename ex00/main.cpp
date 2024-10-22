#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap_trap("alpha");
	ClapTrap clap_trap2(clap_trap);
	ClapTrap clap_trap3;

	clap_trap3 = clap_trap2;

	clap_trap.attack("enemy1");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(5);

	return 0;
}
