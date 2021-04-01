/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:17:57 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 14:43:11 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
   	_energyPoints(100),	_maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5),
	_name(name)
{
	std::cout << "FragTrap name constructor." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : _hitPoints(src._hitPoints),
	_maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
	_maxEnergyPoints(src._maxEnergyPoints), _level(src._level),
	_meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage),
	_armorDamageReduction(src._armorDamageReduction), _name(src._name)
{
	std::cout << "FragTrap copy constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor." << std::endl;
}

void FragTrap::_checkVitals(void)
{
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}

FragTrap & FragTrap::operator = (FragTrap const & src)
{
	_hitPoints = src._hitPoints;
	_maxHitPoints = src._maxHitPoints;
	_energyPoints = src._energyPoints;
	_maxEnergyPoints = src._maxEnergyPoints;
	_level = src._level;
	_name = src._name;
	_meleeAttackDamage = src._meleeAttackDamage;
	_rangedAttackDamage = src._rangedAttackDamage;
	_armorDamageReduction = src._armorDamageReduction;
	_checkVitals();
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at range, causing " << _rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at melee distance, causing " << _meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount >= _armorDamageReduction)
	{
		amount -= _armorDamageReduction;
		if (amount < _hitPoints)
			_hitPoints -= amount;
		else
			_hitPoints = 0;
	}
	_checkVitals();
	std::cout << "FR4G-TP " << _name << " takes " << amount;
	std::cout << " damages (after armor damage reduction ) and has now ";
	std::cout << _hitPoints << " hit points.";
	std::cout << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int missingPoints = _maxHitPoints - _hitPoints;
	unsigned int repairPoints = amount > missingPoints ? missingPoints : amount;

	_hitPoints += repairPoints;
	_checkVitals();
	std::cout << "FR4G-TP " << _name << " gains " << amount;
	std::cout << " hit points and has now " << _hitPoints << " hit points.";
	std::cout << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string const attack[]={"a random attack of ranged type",
		"a random attack of melee type",
		"another random attack of ranged type",
		"an attack which hurts",
		"an attack which hurts even more",
		"an attack which would have hurt if you were an infant"};
	
	if (_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << _name << " can't launch vaulthunter_dot_exe.";
		std::cout << std::endl;
		return ;
	}
	_energyPoints -= 25;
	_checkVitals();
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " with " << attack[std::rand() % 6] << ", causing "; 
	std::cout << _meleeAttackDamage << " points of damage!" << std::endl;
	std::cout << "It, now, has " << _energyPoints << " energy points." << std::endl;
}
