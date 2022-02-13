/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:59:10 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 15:48:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( void ) : _type("")
{
	std::cout << "Void constructor of Weapon called" << std::endl;
	return ;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "Constructor of Weapon called" << std::endl;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << "Destructor of Weapon " <<  this->_type << " called" << std::endl;
	return ;
}

const std::string&	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	_type = type;
}
