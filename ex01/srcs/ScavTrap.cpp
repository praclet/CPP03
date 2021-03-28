/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:27:28 by praclet           #+#    #+#             */
/*   Updated: 2021/03/28 13:51:37 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
   	_energyPoints(100),	_maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3),
	_name(name)
{
}

ScavTrap::ScavTrap(ScavTrap const & src) : _hitPoints(src._hitPoints),
	_maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
	_maxEnergyPoints(src._maxEnergyPoints), _level(src._level),
	_meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage),
	_armorDamageReduction(src._armorDamageReduction), _name(src._name)
{
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::_checkVitals(void)
{
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & src)
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << _name << " attacks " << target;
	std::cout << " at range, causing " << _rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << _name << " attacks " << target;
	std::cout << " at melee distance, causing " << _meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << "SCAV-TP " << _name << " takes " << amount;
	std::cout << " damages (before armor damage reduction) and has now ";
	std::cout << _hitPoints << " hit points.";
	std::cout << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_checkVitals();
	std::cout << "SCAV-TP " << _name << " gains " << amount;
	std::cout << " hit points and has now " << _hitPoints << " hit points.";
	std::cout << std::endl;
}

void ScavTrap::challengeNewComer(std::string const & target)
{
	std::string const challenges[]={"a challenge",
		"a witty challenge",
		"a funny challenge",
		"another type of funny challenge with references to some obscure TV series",
		"another funny challenge (based on a pony story)",
		"another witty challenge (for nerds)"};
	
	std::cout << "SCAV-TP " << _name << " challenges " << target;
	std::cout << " with " << challenges[std::rand() % 6] << "." << std::endl;
}

