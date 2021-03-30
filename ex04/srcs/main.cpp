/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/03/30 16:27:29 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

	NinjaTrap n8("Number eight");
	n8.rangedAttack("Mob #30");
	n8.takeDamage(12);
	n8.takeDamage(25);
	n8.meleeAttack("Mob #5");
	n8.meleeAttack("Mob #2");
	n8.takeDamage(250);

	NinjaTrap *n10 = new NinjaTrap("Number 10");
	n10->takeDamage(25);
	n10->takeDamage(200);
	n10->rangedAttack("Mob #4");
	n10->beRepaired(12);
	n10->beRepaired(12);
	n10->beRepaired(120);
	n10->meleeAttack("Mob #2");
	delete n10;
};
