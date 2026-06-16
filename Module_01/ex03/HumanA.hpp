/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:11:34 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:08:56 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
	private:
		std::string _name;
		Weapon	&_weapon; // Reference cannot be changed thus becomes eternal
	
	public:
		HumanA(std::string _name, Weapon &weapon);

		void	attack();

		~HumanA();
	
};

#endif