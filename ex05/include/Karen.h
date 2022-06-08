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

    void complain ( std::string level );

private:
    std::string	mComplaintsLevel[ 4 ];
    void ( Karen::*mpKarenComplaints[ 4 ] )( void );
    
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

#endif
