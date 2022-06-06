// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.hpp"

void randomChump( std::string pName )
{
	Zombie zombie = Zombie( pName );
	zombie.announce();
}
