// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Harl.h"

int main ( void )
{
    Harl crazyHarl = Harl();

    std::cout << std::endl << "-------------------- DEBUG --------------------" << std::endl;

    crazyHarl.complain( "DEBUG" );

    std::cout << "-----------------------------------------------" << std::endl << std::endl;

    std::cout << "-------------------- INFO ---------------------" << std::endl;

    crazyHarl.complain( "INFO" );

    std::cout << "-----------------------------------------------" << std::endl << std::endl;

    std::cout << "------------------- WARNING -------------------" << std::endl;

    crazyHarl.complain( "WARNING" );

    std::cout << "-----------------------------------------------" << std::endl << std::endl;

    std::cout << "-------------------- ERROR --------------------" << std::endl;

    crazyHarl.complain( "ERROR" );

    std::cout << "-----------------------------------------------" << std::endl << std::endl;
}
