// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

# include "./include/HumanA.h"
# include "./include/HumanB.h"

int main( void )
{
	{
		Weapon club = Weapon( "crude spiked club" );
		HumanA bob( "Bob", club );
		bob.attack();
		club.setType( "some other type of club" );
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon( "crude spiked club" );
		HumanB jim( "Jim" );
		jim.setWeapon( &club );
		jim.attack();
		club.setType( "some other type of club" );
		jim.attack();
	}
	return 0;
}
