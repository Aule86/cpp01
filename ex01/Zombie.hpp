/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:58:29 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/25 11:17:17 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();

	//SETTERS

	void	setname(std::string name);
	//GETTERS

	std::string getname(void);
	void	announce(void);
};

Zombie *zombieHorde(int n, std::string name);

#endif