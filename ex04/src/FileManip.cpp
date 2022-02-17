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

static std::vector<size_t>	findStr( std::string str, std::string sub)
{
	std::vector<size_t> positions;
	size_t pos = str.find(sub, 0);

	while(pos != std::string::npos)
	{
		positions.push_back(pos);
		pos = str.find(sub, pos + 1);
	}

	return (positions);
}

void	FileManip::replace( void )
{
	std::string line;
	std::vector<size_t> positions;
	std::ifstream readfile (_filename.c_str());
	std::ofstream writefile (_replace.c_str());
	if (readfile.is_open())
	{
		while (std::getline(readfile, line))
		{
			positions = findStr( line, _s1 );
			if (writefile.is_open())
			{
				for (int i = positions.size() - 1; i >= 0; i--)
					line = line.substr(0, positions[i]) + _s2 + line.substr(positions[i] + _s1.length(), line.length() - 1);
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
