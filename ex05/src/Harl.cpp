// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Harl.h"

//------------------------------------------------------------------------------

Harl::Harl( void )
{
    mComplaintsLevel[ 0 ] = "DEBUG";
    mComplaintsLevel[ 1 ] = "INFO";
    mComplaintsLevel[ 2 ] = "WARNING";
    mComplaintsLevel[ 3 ] = "ERROR";

    mpHarlComplaints[ 0 ] = &Harl::debug;
    mpHarlComplaints[ 1 ] = &Harl::info;
    mpHarlComplaints[ 2 ] = &Harl::warning;
    mpHarlComplaints[ 3 ] = &Harl::error;

    std::cout << "Constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Harl::~Harl( void )
{
    std::cout << "Destructor called" << std::endl;
}

//------------------------------------------------------------------------------

void Harl::complain( std::string level )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( level == mComplaintsLevel[ i ] )
            ( this->*mpHarlComplaints[ i ] )();
    }
}

//------------------------------------------------------------------------------

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my " 
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!"
              << std::endl;
}

//------------------------------------------------------------------------------

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn't put enough bacon in my burger! "
              << "If you did, I wouldn't be asking for more!"
              << std::endl;
}

//------------------------------------------------------------------------------

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I've been coming for years whereas you started working "
              << "here since last month."
              << std::endl;
}

//------------------------------------------------------------------------------

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

//------------------------------------------------------------------------------
