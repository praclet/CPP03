/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:48:12 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 18:14:53 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap default constructor." << std::endl;
}

SuperTrap::SuperTrap(std::string name)
	: ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name)
{
	std::cout << "SuperTrap name constructor." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src)
{
	std::cout << "SuperTrap copy constructor." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor." << std::endl;
}
