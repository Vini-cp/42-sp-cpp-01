/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:27:03 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 02:55:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main(void)
{
	// Creating directly from class
	Zombie zomb = Zombie("Zombzeras");
	zomb.announce();
	std::cout << std::endl;

	// Using newZombie function
	Zombie *newZomb = newZombie("ZombNew");
	newZomb->announce();
	delete newZomb;
	std::cout << std::endl;

	// Using randomChump function
	randomChump("ZombRandom");
	std::cout << std::endl;

	return (0);
}