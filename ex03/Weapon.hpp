/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:49:33 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 12:28:09 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:

		/* CONSTRUCTORS AND DESTRUCTORS */
		Weapon();
		Weapon(std::string new_type);
		~Weapon();

		/* SETTERS*/
		void		setType(std::string new_type);
		/* GETTERS */
		std::string	getType();

	private:
		std::string	type;
};

#endif