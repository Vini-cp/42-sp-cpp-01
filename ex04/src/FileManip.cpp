/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:26:46 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 12:54:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FileManip.hpp"

FileManip::FileManip( std::string filename, std::string s1, std::string s2 )
	: _filename(filename), _s1(s1), _s2(s2)
{
	_replace = filename + ".replace";
	std::cout << "Constructor called" << std::endl;
}

FileManip::~FileManip( void )
{
	std::cout << "Destructor called" << std::endl;
}

void	FileManip::replace( void )
{
	std::string line;
	size_t	pos;
	std::ifstream readfile (_filename.c_str());
	std::ofstream writefile (_replace.c_str());
	if (readfile.is_open())
	{
		while (std::getline(readfile, line))
		{
			if (writefile.is_open())
			{
				pos = line.find(_s1, 0);
				while(pos != std::string::npos)
				{
					line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length(), line.length() - 1);
					pos = line.find(_s1, 0);
				}
				writefile << line;
				writefile << "\n";
			}
			else
				std::cout << "Unable to open file";
		}
		writefile.close();
		readfile.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}
