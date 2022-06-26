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

    void complain ( std::string level );

private:
    std::string	mComplaintsLevel[ 4 ];
    void ( Harl::*mpHarlComplaints[ 4 ] )( void );

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

#endif
