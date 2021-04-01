/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:27:28 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 14:53:39 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name)
{
	std::cout << "ScavTrap name constructor." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor." << std::endl;
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
