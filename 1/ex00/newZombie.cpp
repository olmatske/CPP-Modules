/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:10:03 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/12 12:22:48 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name ) { // Heap Allocated: User must free manually via Destructor
	Zombie	*zombie = new Zombie(name);
	return(zombie);
}
