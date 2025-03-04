/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:07:13 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 12:14:54 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string new_type)
{
	type = new_type;
}

Weapon::~Weapon()
{

}

std::string	Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}