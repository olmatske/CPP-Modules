/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:14:06 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 20:48:40 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <iostream>
#include <string>

const std::string M = "\033[1;35m";
const std::string G = "\033[1;32m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";

class HumanB {
	private:
		std::string _name;
		Weapon	*_weapon; // Pointer can be NULL and be changed later
	
	public:
		HumanB(std::string _name, Weapon *weapon);

		void	attack();
	
};

#endif