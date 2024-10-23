#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("default"), hit_points_(10), energy_points_(10), attack_damage_(0)
{
	std::cout << "\033[31mClapTrap\033[0m default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0)
{
	std::cout << "\033[31mClapTrap\033[0m constructor with name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	std::cout << "\033[31mClapTrap\033[0m copy constructor" << std::endl;
	*this = clap_trap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31mClapTrap\033[0m destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap)
{
	std::cout << "\033[31mClapTrap\033[0m assignation operator" << std::endl;
	name_ = clap_trap.name_;
	hit_points_ = clap_trap.hit_points_;
	energy_points_ = clap_trap.energy_points_;
	attack_damage_ = clap_trap.attack_damage_;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (isDead())
	{
		std::cout << "\033[31mClapTrap\033[0m " << name_ << " is dead and cannot attack!" << std::endl;
		return;
	}
	energy_points_--;
	std::cout << "\033[31mClapTrap\033[0m " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (isDead())
	{
		std::cout << "\033[31mClapTrap\033[0m " << name_ << " is dead!" << std::endl;
		return;
	}
	std::cout << "\033[31mClapTrap\033[0m " << name_ << " takes " << amount << " points of damage!" << std::endl;
	if (hit_points_ < amount)
		hit_points_ = 0;
	else
	hit_points_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{	
	unsigned long total;

	total = static_cast<unsigned long>(hit_points_) + static_cast<unsigned long>(amount);
	if (isDead())
	{
		std::cout << "\033[31mClapTrap\033[0m " << name_ << " is dead and cannot be repaired!" << std::endl;
		return;
	}
	else if (total >= UINT_MAX)
	{
		std::cout << "\033[31mClapTrap\033[0m " << name_ << " is fully repaired!" << std::endl;
		hit_points_ = UINT_MAX;
		energy_points_--;
		return;
	}
	std::cout << "\033[31mClapTrap\033[0m " << name_ << " is repaired for " << amount << " points!" << std::endl;
	hit_points_ += amount;
	energy_points_--;
}

bool ClapTrap::isDead() const
{
	if (hit_points_ <= 0)
		return true;
	else if (energy_points_ <= 0)
		return true;
	return false;
}

std::string ClapTrap::getName() const
{
	return name_;
}

unsigned int ClapTrap::getHitpoints() const
{
	return hit_points_;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return energy_points_;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return attack_damage_;
}

void ClapTrap::setName(const std::string &name)
{
	name_ = name;
}

void ClapTrap::setHitPoints(int hitpoints)
{
	hit_points_ = hitpoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	energy_points_ = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	attack_damage_ = attackDamage;
}
