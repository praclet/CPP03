/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:49:09 by praclet           #+#    #+#             */
/*   Updated: 2021/03/29 14:56:05 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	protected:
		SuperTrap();
	public:
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap();
};

#endif
