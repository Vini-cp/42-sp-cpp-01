// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/HumanA.hpp"

//------------------------------------------------------------------------------

HumanA::HumanA( std::string pName, Weapon& prWeapon ) :
	mName( pName ),
	mrWeapon( prWeapon )
{
	std::cout << "Constructor of HumanA called" << std::endl;
}

//------------------------------------------------------------------------------

HumanA::~HumanA( void )
{
	std::cout << "Destructor of HumanA " <<  mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

void HumanA::attack( void ) const
{
	std::cout << mName << " attacks with their " << mrWeapon.getType() << std::endl;
}

//------------------------------------------------------------------------------
