/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:27:24 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:18:54 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string R = "\033[0m";
const std::string G = "\033[1;32m";

Weapon::Weapon(const std::string &initialType) : _type(initialType) {
	std::cout << G << _type <<  R << " ready to use" << std::endl;
}

const std::string	&Weapon::getType() const {
	return (this->_type);
}


void	Weapon::setType(const std::string &newType) {
	this->_type = newType;
}

Weapon::~Weapon() {}

