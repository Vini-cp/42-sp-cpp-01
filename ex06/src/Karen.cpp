/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:06:46 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 19:08:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

Karen::Karen( void )
{
	std::cout << "Constructor called" << std::endl;
}

Karen::~Karen( void )
{
	std::cout << "Destructor called" << std::endl;
}

static void	complainTitle( std::string str )
{
	std::cout << "[ ";
	for (int i = 0; i < (int) str.length(); i++)
	{
		char ch = toupper(str[i]);
		std::cout << ch;
	}
		
	std::cout << " ]" << std::endl;
}

static std::string	parseLevel( std::string str )
{
	for (int i = 0; i < (int) str.length(); i++)
		str[i] = tolower(str[i]);
	return (str);
}

void	Karen::complain ( std::string level )
{
	bool hasComplaint = false;
	karenComplaints kComplaints[] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string complaints[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	level = parseLevel ( level );
	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
		{
			hasComplaint = true;
			complainTitle( level );
			while (i < 4)
			{
				(this->*(kComplaints[i]))();
				i++;	
			}
		}
	}
	if (!hasComplaint)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
