/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:27:03 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 03:40:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main(void)
{
	// Creating directly from class
	Zombie zomb = Zombie("Zombzeras");
	zomb.announce();
	std::cout << std::endl;

	// Using zombieHorde function
	Zombie *zombies = zombieHorde(5, "ZombNew");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
	std::cout << std::endl;

	return (0);
}
