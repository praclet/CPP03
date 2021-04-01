/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:49:09 by praclet           #+#    #+#             */
/*   Updated: 2021/04/01 15:29:32 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	protected:
		SuperTrap();
		using FragTrap::_hitPoints;
		using FragTrap::_maxHitPoints;
		using FragTrap::_rangedAttackDamage;
		using FragTrap::_armorDamageReduction;
		using NinjaTrap::_energyPoints;
		using NinjaTrap::_maxEnergyPoints;
		using NinjaTrap::_meleeAttackDamage;
	public:
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap();
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
};

#endif
