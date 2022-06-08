/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:28:23 by coder             #+#    #+#             */
/*   Updated: 2022/06/08 02:23:14 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Karen.h"

int main( int argc, char **argv )
{
	Karen crazyKaren = Karen();
	if (argc != 2)
		return (0);
	crazyKaren.complain(argv[1]);
}
