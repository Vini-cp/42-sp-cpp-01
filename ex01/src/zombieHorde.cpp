// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int pN, std::string pName )
{
	Zombie* lpZombie = new Zombie[ pN ];

	for ( int i = 0; i < pN; i++ )
		lpZombie[ i ].setName( pName );

	return lpZombie;
}
