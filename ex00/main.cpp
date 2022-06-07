// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Zombie.h"

int main( void )
{
	// Creating directly from class
	Zombie lZombie = Zombie( "Zombzeras" );
	lZombie.announce();
	std::cout << std::endl;

	// Using newZombie function
	Zombie *lpZombiePtr = newZombie( "ZombNew" );
	lpZombiePtr->announce();
	delete lpZombiePtr;
	std::cout << std::endl;

	// Using randomChump function
	randomChump( "ZombRandom" );
	std::cout << std::endl;

	return 0;
}