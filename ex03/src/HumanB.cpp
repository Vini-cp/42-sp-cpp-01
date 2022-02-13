/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:50:17 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 15:57:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	std::cout << "Constructor of HumanB called" << std::endl;
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << "Destructor of HumanB " <<  this->_name << " called" << std::endl;
	return ;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}
