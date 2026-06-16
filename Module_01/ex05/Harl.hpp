/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:53:43 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 19:41:18 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

const std::string M = "\033[1;35m";
const std::string G = "\033[1;32m";
const std::string C = "\033[1;36m";
const std::string RED = "\033[1;31m";
const std::string P = "\033[1;38;5;216m";
const std::string R = "\033[0m";

class	Harl {
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
	
	public:
		void	complain( std::string level );
};

#endif