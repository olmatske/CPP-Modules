/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:11:34 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 20:48:16 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

const std::string M = "\033[1;35m";
const std::string C = "\033[1;36m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";

class HumanA {
	private:
		std::string _name;
		Weapon	&_weapon; // Reference cannot be changed thus becomes eternal
	
	public:
		HumanA(std::string _name, Weapon &weapon);

		void	attack();
	
};

#endif