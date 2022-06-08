// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Karen.h"

//------------------------------------------------------------------------------

Karen::Karen( void )
{
    mComplaintsLevel[ 0 ] = "DEBUG";
    mComplaintsLevel[ 1 ] = "INFO";
    mComplaintsLevel[ 2 ] = "WARNING";
    mComplaintsLevel[ 3 ] = "ERROR";

    mpKarenComplaints[ 0 ] = &Karen::debug;
    mpKarenComplaints[ 1 ] = &Karen::info;
    mpKarenComplaints[ 2 ] = &Karen::warning;
    mpKarenComplaints[ 3 ] = &Karen::error;

    std::cout << "Constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Karen::~Karen( void )
{
    std::cout << "Destructor called" << std::endl;
}

//------------------------------------------------------------------------------

void Karen::complain( std::string level )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( level == mComplaintsLevel[i] )
            ( this->*mpKarenComplaints[i] )();
    }
}

//------------------------------------------------------------------------------

void Karen::debug( void )
{
    std::cout << "I love having extra bacon for my " 
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!"
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! "
              << "If you did, I wouldn’t be asking for more!"
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working "
              << "here since last month."
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

//------------------------------------------------------------------------------
