// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Weapon.hpp"

//------------------------------------------------------------------------------

Weapon::Weapon( void ) : mType( "" )
{
	std::cout << "Default constructor of Weapon called" << std::endl;
}

//------------------------------------------------------------------------------

Weapon::Weapon( std::string pType ) : mType( pType )
{
	std::cout << "Constructor of Weapon called" << std::endl;
}

//------------------------------------------------------------------------------

Weapon::~Weapon( void )
{
	std::cout << "Destructor of Weapon " << mType << " called" << std::endl;
}

//------------------------------------------------------------------------------

const std::string& Weapon::getType( void ) const
{
	return mType;
}

//------------------------------------------------------------------------------

void	Weapon::setType( const std::string pType )
{
	mType = pType;
}

//------------------------------------------------------------------------------
