/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:26:41 by coder             #+#    #+#             */
/*   Updated: 2022/02/17 12:56:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANIP_H
# define FILEMANIP_H

# include <iostream>
# include <fstream>
# include <string>
# include <vector>

class FileManip
{
	private:

		std::string	_filename;
		std::string	_replace;
		std::string	_s1;
		std::string	_s2;

	public:

		FileManip( std::string filename, std::string s1, std::string s2 );
		~FileManip( void );

		void	replace( void );
};

#endif
