/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:09:58 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/14 17:15:39 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv) {
	int	horde = 0;

	if (argc > 2)
		std::cout << RED << "This program only accepts one or no parameters: ./horde\n" << R;
	if (argc == 2)
		horde = atoi(argv[1]);
	else
		horde = 7;

	std::cout << "\n##########################################################" << R << std::endl;
	std::cout << M << "----- Welcome to the Zombie program -----\n\n" << R;
	std::cout << C << "Testing Stack allocation using randomChump()\n" << R;

	std::cout << C << "Testing Heap allocation using newZombie()\n" << R;
	
	Zombie	*heap = newZombie("HeapZombie");
	heap->announce();
	delete heap;

	std::cout << M << "---------- End of the program ------------" << R;
	std::cout << "\n##########################################################" << R << std::endl;

	return (0);
}
