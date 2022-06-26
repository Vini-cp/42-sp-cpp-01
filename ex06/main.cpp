// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Harl.h"

int main( int argc, char **argv )
{
    if ( argc != 2 )
        return 0;

    Harl crazyHarl = Harl();
    crazyHarl.complain( argv[ 1 ] );
}
