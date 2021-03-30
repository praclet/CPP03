/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:48:12 by praclet           #+#    #+#             */
/*   Updated: 2021/03/30 15:22:32 by praclet          ###   ########lyon.fr   */
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
	std::cout << "NinjaTrap default constructor" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
	: ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	std::cout << "NinjaTrap name constructor" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src)
{
	std::cout << "NinjaTrap copy constructor" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "NinjaTrap destructor" << std::endl;
}
