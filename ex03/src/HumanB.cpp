// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/HumanB.h"

//------------------------------------------------------------------------------

HumanB::HumanB( std::string pName ) :
    mName( pName ),
    mpWeapon( NULL )
{
    std::cout << "Constructor of HumanB called" << std::endl;
}

//------------------------------------------------------------------------------

HumanB::~HumanB( void )
{
    std::cout << "Destructor of HumanB " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

void HumanB::attack( void ) const
{
    if ( mpWeapon )
    {
        std::cout << mName << " attacks with their " << mpWeapon->getType() << std::endl;
    }
}

//------------------------------------------------------------------------------

void HumanB::setWeapon( Weapon* ppWeapon )
{
    mpWeapon = ppWeapon;
}

//------------------------------------------------------------------------------
