// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.h"

void randomChump( std::string pName )
{
    Zombie lZombie = Zombie( pName );
    lZombie.announce();
}
