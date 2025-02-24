/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newChump.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:42:54 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/24 13:14:55 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	newZombie;
	
	newZombie.setname(name);
	newZombie.announce();
}