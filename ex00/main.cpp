// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

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