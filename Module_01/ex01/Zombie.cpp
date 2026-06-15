/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:10:09 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/14 18:03:01 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << M << name << ": created\n" << R;
}

////////////////////////////////////////////////////////////////////////////////
void	Zombie::announce(void) {
	std::cout << G << _name << R << ": BraiiiiiiinnnzzzZ...\n";
}

void	setName(std::string zombieName) {
	this->name
}

////////////////////////////////////////////////////////////////////////////////
Zombie::~Zombie() {
	std::cout << R << _name << " destroyed\n" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////