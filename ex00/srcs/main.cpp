/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 14:21:51 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap n1("Number one");
	n1.rangedAttack("Mob #512");
	n1.takeDamage(12);
	n1.takeDamage(25);
	n1.meleeAttack("Mob #1024");
	n1.meleeAttack("Mob #568");
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
};
