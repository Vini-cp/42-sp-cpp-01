/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:28:23 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 19:04:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Karen.hpp"

int main ( int argc, char **argv )
{
	Karen crazyKaren = Karen();
	if (argc != 2)
		return (0);
	crazyKaren.complain(argv[1]);
}
