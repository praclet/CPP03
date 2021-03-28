/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:42:51 by praclet           #+#    #+#             */
/*   Updated: 2021/03/28 14:39:38 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
}

ClapTrap::ClapTrap(ClapTrap const & src) : _hitPoints(src._hitPoints),
	_maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
	_maxEnergyPoints(src._maxEnergyPoints), _level(src._level),
	_meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage),
	_armorDamageReduction(src._armorDamageReduction), _name(src._name)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::_checkVitals(void)
{
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & src)
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

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CLAPTRAP " << _name << " attacks " << target;
	std::cout << " at range, causing " << _rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CLAPTRAP " << _name << " attacks " << target;
	std::cout << " at melee distance, causing " << _meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << "CLAPTRAP " << _name << " takes " << amount;
	std::cout << " damages (before armor damage reduction) and has now ";
	std::cout << _hitPoints << " hit points.";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_checkVitals();
	std::cout << "CLAPTRAP " << _name << " gains " << amount;
	std::cout << " hit points and has now " << _hitPoints << " hit points.";
	std::cout << std::endl;
}
