// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class Karen
{
public:

    Karen( void );
    ~Karen( void );

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
