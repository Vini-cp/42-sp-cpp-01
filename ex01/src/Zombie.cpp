// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Zombie.h"

//------------------------------------------------------------------------------

Zombie::Zombie( void ) : mName( "" )
{
    std::cout << "Default constructor of Zombie called" << std::endl;
}

//------------------------------------------------------------------------------

Zombie::Zombie( std::string pName ) : mName( pName )
{
    std::cout << "Name constructor of Zombie called" << std::endl;
}

//------------------------------------------------------------------------------

Zombie::~Zombie( void )
{
    std::cout << "Destructor of Zombie " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

void Zombie::setName( std::string pName )
{
    mName = pName;
}

//------------------------------------------------------------------------------

void Zombie::announce( void ) const
{
    std::cout << mName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//------------------------------------------------------------------------------
