// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
public:

	Weapon( void );
	Weapon( std::string pType );
	~Weapon( void );

	const std::string& getType( void ) const;
	void setType( const std::string pType );

private:

	std::string mType;
};

#endif
