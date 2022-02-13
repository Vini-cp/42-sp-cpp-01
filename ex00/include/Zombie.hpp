/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:03:47 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 03:30:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	private:

		std::string		_name;

	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
