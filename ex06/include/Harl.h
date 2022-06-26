// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
public:

    Harl( void );
    ~Harl( void );

    void complain( std::string pLevel );

private:
    std::string	mComplaintsLevel[ 4 ];

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    int findLogLevel( std::string pLevel );
};

#endif
