/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:30:01 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/24 13:17:18 by aszamora         ###   ########.fr       */
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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif