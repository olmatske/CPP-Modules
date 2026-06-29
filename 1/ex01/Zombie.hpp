/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:10:11 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 14:48:08 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__


#include <iostream>
#include <cstdlib>
#include <sstream>

//////////////////////////////////////////////////////////////////
const std::string M = "\033[1;35m";
const std::string C = "\033[1;36m";
const std::string G = "\033[1;32m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";
//////////////////////////////////////////////////////////////////

class Zombie {
	public:
		Zombie( std::string name = "Default" );   // Constructor

		void	announce( void );     // Member Function

		void	setName(std::string zombieName);
		
		~Zombie( void );             // Descructor
		
		private:
		std::string	_name;
	};
	
	Zombie	*newZombie( std::string name );  // heap
	Zombie	*zombieHorde( int N, std::string name );
	
#endif