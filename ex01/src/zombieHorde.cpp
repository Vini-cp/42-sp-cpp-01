// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.h"

Zombie* zombieHorde( int N, std::string pName )
{
    Zombie* lpZombie = new Zombie[ N ];

    for ( int i = 0; i < N; i++ )
    {
        lpZombie[ i ].setName( pName );
    }

    return lpZombie;
}
