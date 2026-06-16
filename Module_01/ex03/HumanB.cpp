/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:44:40 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:13:59 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

const std::string M = "\033[1;35m";
const std::string G = "\033[1;32m";
const std::string C = "\033[1;36m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon) {
	std::cout << G << _name << R << " created" << std::endl;
}


void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
	std::cout << G << _name << R << " aquired a " << M << _weapon->getType() << R << std::endl;
}


void	HumanB::attack() {
	if (_weapon != NULL) {
		std::cout << G << _name << R << " attacks with their " << M <<
			_weapon->getType() << R << std::endl;
	}
	else {
		std::cout << G << _name << R << " attacks with their fists" << R << std::endl;
	}
}

HumanB::~HumanB() {}

