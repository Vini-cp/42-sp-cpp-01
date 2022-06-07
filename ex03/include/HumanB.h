// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.h"

class HumanB
{
public:

	HumanB( std::string pName );
	~HumanB( void );

	void	attack( void ) const;

	void	setWeapon( Weapon* ppWeapon );

private:

	std::string mName;
	Weapon* mpWeapon;
};

#endif
