/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:48:12 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 14:56:35 by praclet          ###   ########lyon.fr   */
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
}

SuperTrap::SuperTrap(std::string name)
	: ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src)
{
}

SuperTrap::~SuperTrap()
{
}
