/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:26:50 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 13:22:21 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	protected:
		NinjaTrap();
		void _displayMsg(ClapTrap const & opponent, std::string className) const;
	public:
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap();
		void ninjaShoebox(NinjaTrap const & opponent) const;
		void ninjaShoebox(ClapTrap const & opponent) const;
		void ninjaShoebox(FragTrap const & opponent) const;
		void ninjaShoebox(ScavTrap const & opponent) const;
};

#endif
