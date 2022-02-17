/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:28:23 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 18:30:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Karen.hpp"

int main ( void )
{
	Karen crazyKaren = Karen();
	crazyKaren.complain("debug");
	crazyKaren.complain("info");
	crazyKaren.complain("warning");
	crazyKaren.complain("error");
}
