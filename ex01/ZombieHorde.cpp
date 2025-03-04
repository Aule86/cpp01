/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:01:28 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 11:07:28 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
	Zombie *zombieHorde = new Zombie[n]; // allocate N zombies
	for (int i = 0; i < n; ++i)
	{
		zombieHorde[i].setname(name);
		zombieHorde[i].announce();
	}
	return (zombieHorde);
}
