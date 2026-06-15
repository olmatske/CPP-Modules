/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:44:40 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 20:48:55 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon) {}

void	HumanB::attack() {
	std::cout << G << _name << R << " attacks with their " << M <<
			_weapon->getType() << R << std::endl;
}
