/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:27:28 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 09:16:51 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
}

NinjaTrap::~NinjaTrap()
{
}

void ninjaShoebox(NinjaTrap const & opponent) const
{
}

void ninjaShoebox(ClapTrap const & opponent) const
{
}

void ninjaShoebox(FragTrap const & opponent) const
{
}

void ninjaShoebox(ScavTrap const & opponent) const
{
}
