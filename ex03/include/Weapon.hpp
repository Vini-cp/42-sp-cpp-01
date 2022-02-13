/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:59:08 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 15:31:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	private:

		std::string		_type;

	public:

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		const std::string&	getType( void );
		void				setType( std::string type );

};

#endif
