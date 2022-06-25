// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
public:

    Zombie( void );
    Zombie( std::string pName );
    ~Zombie( void );

    void setName( std::string pName );

    void announce( void ) const;

private:

    std::string mName;
};

Zombie* zombieHorde( int N, std::string pName );

#endif
