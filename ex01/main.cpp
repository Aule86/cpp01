/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:54:51 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 11:18:20 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	NumZombies = 8;

	std::cout << "A ZOMBIE HORDE APPROACHING!" << std::endl;
	Zombie *Horde = zombieHorde(NumZombies, "The Paco");
	
	delete[] Horde;
}