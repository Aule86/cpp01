/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:47:53 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 11:49:10 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA 
{
	public:
		/* CONSTRUCTORS AND DESTRUCTORS */
		HumanA(std::string name, class Weapon &new_weapon);
		~HumanA();
		
		void	attack();
	private:
		std::string		name;
		class Weapon	&weapon;
};

#endif