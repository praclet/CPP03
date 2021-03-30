/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/03/30 15:40:16 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

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

	ClapTrap n78("Number 78");
	n78.takeDamage(2);
	n78.rangedAttack("Mob #5");
	n78.takeDamage(12);
	n78.takeDamage(25);
	n78.meleeAttack("Mob #65");
	n78.meleeAttack("Mob #247");
	n78.takeDamage(250);

	ClapTrap *n0 = new ClapTrap("Number 0");
	n0->takeDamage(25);
	n0->takeDamage(200);
	n0->beRepaired(12);
	n0->beRepaired(12);
	n0->beRepaired(120);
	delete n0;

	NinjaTrap n18("Number 18");
	n18.takeDamage(2);
	n18.rangedAttack("Mob #5");
	n18.takeDamage(12);
	n18.takeDamage(25);
	n18.meleeAttack("Mob #65");
	n18.meleeAttack("Mob #247");
	n18.takeDamage(250);
	n18.ninjaShoebox(n78);
	n18.ninjaShoebox(n8);
	n18.ninjaShoebox(n1);

	NinjaTrap *n9 = new NinjaTrap("Number 9");
	n9->takeDamage(25);
	n9->takeDamage(200);
	n9->beRepaired(12);
	n9->beRepaired(12);
	n9->beRepaired(120);
	n9->ninjaShoebox(n18);
	delete n0;



};
