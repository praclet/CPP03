/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:27:28 by praclet           #+#    #+#             */
/*   Updated: 2021/03/28 18:15:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100; 
	_maxHitPoints = 100;
   	_energyPoints = 100;	
	_maxEnergyPoints = 100; 
	_level = 1;
	_meleeAttackDamage = 20; 
	_rangedAttackDamage = 15; 
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
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
