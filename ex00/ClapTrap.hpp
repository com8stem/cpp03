#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name_;
	int hit_points_;
	int energy_points_;
	int attack_damage_;

public:
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	bool isDead() const;

	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &clapTrap);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clapTrap);

	std::string getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	void setName(const std::string &name);
	void setHitPoints(int hitpoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);
};

#endif