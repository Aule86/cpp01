/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:26:01 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 10:52:21 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << "I'm " << name << " the zombie" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string new_name)
{
	name = new_name;
}

std::string	Zombie::getname(void) 
{
	return (name);
}