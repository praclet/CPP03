/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:17:57 by praclet           #+#    #+#             */
/*   Updated: 2021/03/28 17:51:22 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
}

FragTrap::FragTrap(FragTrap const & src)
	: ClapTrap(src)
{
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
