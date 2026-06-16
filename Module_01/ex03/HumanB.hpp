/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:14:06 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:11:17 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	private:
		std::string _name;
		Weapon	*_weapon; // Pointer can be NULL and be changed later
	
	public:
		HumanB(std::string _name, Weapon *weapon);

		void	setWeapon(Weapon &weapon);
		void	attack();

		~HumanB();
	
};

#endif