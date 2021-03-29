/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:26:50 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 09:16:02 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	protected:
		NinjaTrap();
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
