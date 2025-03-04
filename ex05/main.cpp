/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:54:30 by aszamora          #+#    #+#             */
/*   Updated: 2025/03/04 11:54:32 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Max;

	Max.complain("DEBUG");
	Max.complain("INFO");
	Max.complain("WARNING");
	Max.complain("ERROR");
	Max.complain("Whatever");
}
