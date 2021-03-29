/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:43:01 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 10:02:00 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	protected:
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
		std::string _name;
		void _checkVitals(void);
		ClapTrap();
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints,
			unsigned int energyPoints, unsigned int maxEnergyPoints,
			unsigned int level, unsigned int meleeAttackDamage,
			unsigned int rangedAttackDamage,
			unsigned int armorDamageReduction, std::string name);
		~ClapTrap();
		ClapTrap & operator = (ClapTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string const & getName(void) const;
};

#endif
