/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:49:58 by praclet           #+#    #+#             */
/*   Updated: 2021/03/24 16:05:43 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

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
