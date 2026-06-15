/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:10:11 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/14 17:23:41 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__


#include <iostream>
#define BG "\033[48;5;218m"

//////////////////////////////////////////////////////////////////
const std::string M = "\033[1;35m";
const std::string C = "\033[1;36m";
const std::string G = "\033[1;32m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";
//////////////////////////////////////////////////////////////////

// Stack Allocation makes more sense whenever the allocated
//					memory does not require outliving the program.
//					Thus it only lives within the function and
//					does not need manual clean up.

// Heap Allocation  is used whenever the data is significantly
//					bigger and must live on beyond the termination
//					of a program. It requires manual clean up and
//					can be dynamically allocated.
//////////////////////////////////////////////////////////////////

class Zombie {
	public:
		Zombie( std::string name );   // Constructor

		void	announce( void );     // Member Function

		~Zombie( void );             // Descructor

	private:
		std::string	_name;
};

void	randomChump( std::string name ); // stack
Zombie	*newZombie( std::string name );  // heap

#endif