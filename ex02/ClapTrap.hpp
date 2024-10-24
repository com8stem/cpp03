#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <limits.h>

class ClapTrap
{
private:
	std::string name_;
	unsigned int hit_points_;
	unsigned int energy_points_;
	unsigned int attack_damage_;

public:
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	bool isDead() const;

	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clapTrap);

	std::string getName() const;
	unsigned int getHitpoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

	void setName(const std::string &name);
	void setHitPoints(int hitpoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);
};

#endif