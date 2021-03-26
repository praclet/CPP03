/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:17:57 by praclet           #+#    #+#             */
/*   Updated: 2021/03/26 13:37:24 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
   	_energyPoints(100),	_maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5),
	_name(name)
{
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
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
