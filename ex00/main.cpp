/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:29:05 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/24 13:33:55 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*pacoZombie = newZombie("paco");
	std::cout << pacoZombie->getname() + " " << pacoZombie->getname() + " " << pacoZombie->getname() + " " << std::endl;
	randomChump("montoya");
	delete pacoZombie;
}