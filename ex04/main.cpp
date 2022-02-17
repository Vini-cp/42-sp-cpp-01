/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:36:28 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 13:15:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FileManip.hpp"

int main ( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Expected: filename, string_1, string_2" << std::endl;
		return (0);
	}
	FileManip manip = FileManip(argv[1], argv[2], argv[3]);
	manip.replace();
	return (0);
}
