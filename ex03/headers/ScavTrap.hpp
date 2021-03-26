/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:26:50 by praclet           #+#    #+#             */
/*   Updated: 2021/03/26 17:00:06 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		void challengeNewComer(std::string const & target);
};

#endif
