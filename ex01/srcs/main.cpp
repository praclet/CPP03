/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 14:21:48 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap n1("Number one");
	n1.rangedAttack("Mob #512");
	n1.takeDamage(12);
	n1.takeDamage(25);
	n1.meleeAttack("Mob #512");
	n1.meleeAttack("Mob #512");
	n1.takeDamage(250);

	FragTrap *n4 = new FragTrap("Number 4");
	n4->takeDamage(250);
	n4->takeDamage(25);
	n4->vaulthunter_dot_exe("Number one");
	n4->vaulthunter_dot_exe("Number one");
	n4->beRepaired(12);
	n4->vaulthunter_dot_exe("Number one");
	n4->vaulthunter_dot_exe("Number one");
	n4->beRepaired(12);
	n4->vaulthunter_dot_exe("Number one");
	n4->beRepaired(120);
	delete n4;

	ScavTrap n8("Number eight");
	n8.rangedAttack("Mob #30");
	n8.takeDamage(12);
	n8.takeDamage(25);
	n8.meleeAttack("Mob #5");
	n8.meleeAttack("Mob #2");
	n8.takeDamage(250);

	ScavTrap *n10 = new ScavTrap("Number 10");
	n10->takeDamage(25);
	n10->takeDamage(200);
	n10->challengeNewComer("some guy");
	n10->challengeNewComer("some guy");
	n10->beRepaired(12);
	n10->challengeNewComer("some guy");
	n10->challengeNewComer("some guy");
	n10->beRepaired(12);
	n10->challengeNewComer("some guy");
	n10->beRepaired(120);
	delete n10;
};
