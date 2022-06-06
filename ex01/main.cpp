// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Zombie.hpp"

int main( void )
{
	// Creating directly from class
	Zombie lZombie = Zombie( "Zombzeras" );
	lZombie.announce();
	std::cout << std::endl;

	// Using zombieHorde function
	Zombie *lpZombies = zombieHorde( 5, "ZombNew" );
	for ( int i = 0; i < 5; i++ )
		lpZombies[ i ].announce();
	delete [] lpZombies;
	std::cout << std::endl;

	return 0;
}
