/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:09:58 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 14:39:16 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv) {
	int	size = 0;

	if (argc > 2) {
		std::cout << RED << "This program only accepts one or no parameters: " << C << "./horde [number of Zombies to create]\n" << R;
		return (0);
	}
	if (argc == 2) {
		size = atoi(argv[1]);
		if (size <= 0) {
			std::cout << RED << "Please provide a valid nu,eric input.\n" << R;
			return (0);
		}
	}
	else
		size = 7;

	std::cout << "\n##########################################################" << R << std::endl;
	std::cout << M << "----- Welcome to the Zombie Horde program -----\n\n" << R;
	std::cout << C << "--- Creating Horde ---\n" << R;

	Zombie	*horde = zombieHorde(size, "Bob");

	std::cout << C << "\n--- Announcing existance --- \n" << R;
	
	for (int i = 0; i < size; i++) {
		horde[i].announce();
	}

	std::cout << C << "\n--- Creating and accouncing a new Zombie --- \n" << R;
	Zombie	*heap = newZombie("Bob the Heap Zombie");
	heap->announce();

	std::cout << C << "\n--- Killing Horde --- \n" << R;
	delete heap;
	delete[] horde;

	std::cout << M << "\n------------- End of the program --------------" << R;
	std::cout << "\n##########################################################" << R << std::endl;

	return (0);
}
