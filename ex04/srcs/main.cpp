/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 15:22:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(NULL));

	SuperTrap n8("Number eight");
	n8.rangedAttack("Mob #30");
	n8.takeDamage(12);
	n8.takeDamage(25);
	n8.meleeAttack("Mob #5");
	n8.meleeAttack("Mob #2");
	n8.takeDamage(250);

	SuperTrap *n10 = new SuperTrap("Number 10");
	n10->takeDamage(25);
	n10->takeDamage(200);
	n10->rangedAttack("Mob #4");
	n10->beRepaired(12);
	n10->beRepaired(12);
	n10->beRepaired(120);
	n10->meleeAttack("Mob #2");
	delete n10;
};
