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
    std::cout << "Constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Karen::~Karen( void )
{
    std::cout << "Destructor called" << std::endl;
}

//------------------------------------------------------------------------------

void Karen::complain( std::string pLevel )
{
    int lLogLevel = findLogLevel( pLevel );

    switch( lLogLevel ) {
        case 0:
            debug();

        case 1:
            info();

        case 2:
            warning();

        case 3:
            error();
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
}

//------------------------------------------------------------------------------

int Karen::findLogLevel ( std::string pLevel )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( mComplaintsLevel[ i ] == pLevel )
            return i;
    }
    return -1;
}

//------------------------------------------------------------------------------

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my " 
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!\n"
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! "
              << "If you did, I wouldn’t be asking for more!\n"
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working "
              << "here since last month.\n"
              << std::endl;
}

//------------------------------------------------------------------------------

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n"
              << std::endl;
}

//------------------------------------------------------------------------------
