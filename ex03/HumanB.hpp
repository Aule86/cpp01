/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:48:03 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 12:29:51 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB 
{
	public:
		/* CONSTRUCTORS AND DESTRUCTORS */
		HumanB();
		HumanB (std::string name);
		~HumanB();
		
		/*SETTERS*/
		void	setWeapon(class Weapon &new_weapon);

		void	attack();
	private:
		std::string		name;
		class Weapon	*weapon;
};

#endif