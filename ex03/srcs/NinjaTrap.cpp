/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:27:28 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 13:22:41 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap default constructor." << std::endl;
}

void NinjaTrap::_displayMsg(ClapTrap const & opponent, std::string className) const
{
	std::cout << getName() << " (a NinjaTrap) is performing the ninjaShoebox attack " 
		<< "(which in itself is something funny) on "
		<< opponent.getName() << " (a " << className << ")."
		<< std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	std::cout << "NinjaTrap name constructor." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
	std::cout << "NinjaTrap copy constructor." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & opponent) const
{
	_displayMsg(opponent, "NinjaTrap");
}

void NinjaTrap::ninjaShoebox(ClapTrap const & opponent) const
{
	_displayMsg(opponent, "ClapTrap");
}

void NinjaTrap::ninjaShoebox(FragTrap const & opponent) const
{
	_displayMsg(opponent, "FragTrap");
}

void NinjaTrap::ninjaShoebox(ScavTrap const & opponent) const
{
	_displayMsg(opponent, "ScavTrap");
}
