/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:18:11 by praclet           #+#    #+#             */
/*   Updated: 2021/03/26 13:37:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

class FragTrap : public ClapTrap
{
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
