// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Zombie.h"

int main( void )
{
    {
        std::cout << std::endl << "============== A Zombie ==============" << std::endl;

        Zombie lZombie = Zombie( "Zombiiiiie" );

        lZombie.announce();
    }

    std::cout << "======================================" << std::endl << std::endl;
    
    {
        std::cout << "=============== Horde ================" << std::endl;

        const int N = 5;

        Zombie *lpZombies = zombieHorde( N, "ZombNew" );

        for ( int i = 0; i < N; i++ )
        {
            lpZombies[ i ].announce();
        }

        delete[] lpZombies;
        
        std::cout << "======================================" << std::endl;
    }
    
    return 0;
}
