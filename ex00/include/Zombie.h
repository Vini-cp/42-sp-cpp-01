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

    void announce( void );

private:

    std::string mName;
};

Zombie *newZombie( std::string pName );
void randomChump( std::string pName );

#endif
