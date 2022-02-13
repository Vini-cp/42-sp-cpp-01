/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:18:05 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 03:36:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( void ) : _name("")
{
	std::cout << "Void constructor of Zombie called" << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << "Name constructor of Zombie called" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor of Zombie " <<  this->_name << " called" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}
