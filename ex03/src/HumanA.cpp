/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:20:43 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 15:37:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
	std::cout << "Constructor of HumanA called" << std::endl;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << "Destructor of HumanA " <<  this->_name << " called" << std::endl;
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
