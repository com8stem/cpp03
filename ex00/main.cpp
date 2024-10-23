#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap_trap("alpha");
	ClapTrap clap_trap2(clap_trap);
	ClapTrap clap_trap3;

	clap_trap3 = clap_trap2;

	clap_trap.attack("enemy1");
	clap_trap.takeDamage(UINT_MAX);
	clap_trap.beRepaired(5);
	clap_trap2.takeDamage(5);
	clap_trap2.beRepaired(UINT_MAX);
	clap_trap2.attack("enemy2");
	clap_trap3.attack("enemy3");
	clap_trap3.attack("enemy4");
	clap_trap3.attack("enemy5");
	clap_trap3.attack("enemy6");
	clap_trap3.attack("enemy7");
	clap_trap3.attack("enemy8");
	clap_trap3.attack("enemy9");
	clap_trap3.attack("enemy10");
	clap_trap3.attack("enemy11");
	clap_trap3.attack("enemy12");
	clap_trap3.attack("enemy13");
	clap_trap3.beRepaired(5);

	return 0;
}
