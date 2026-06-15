/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:10:09 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 14:35:08 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << M << name << " created\n" << R;
}

////////////////////////////////////////////////////////////////////////////////
void	Zombie::announce(void) {
	std::cout << G << _name << R << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string newName) {
	this->_name = newName;
}

////////////////////////////////////////////////////////////////////////////////
Zombie::~Zombie() {
	std::cout << R << _name << " killed" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////