/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:11:43 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 14:17:10 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) { // Heap Allocated: User must free manually via Destructor
	if (N <= 0) return (NULL);
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		horde[i].setName(name + " " + std::to_string(i));

	return (horde);
}
