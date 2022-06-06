// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.hpp"

Zombie* newZombie( std::string pName )
{
	Zombie *lpZombie = new Zombie( pName );
	return lpZombie;
}
