/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:11:43 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/14 17:44:08 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name) { // Heap Allocated: User must free manually via Destructor
	if (N <= 0) return nullptr;
	Zombie	*horde = new Zombie[N];
	return(horde);
}
