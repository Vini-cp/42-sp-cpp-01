// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
public:

	HumanA( const std::string pName, Weapon& prWeapon );
	~HumanA( void );

	void attack( void ) const;

private:

	std::string	mName;
	Weapon& mrWeapon;
};

#endif
