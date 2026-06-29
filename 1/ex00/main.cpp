/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:09:58 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/12 13:07:30 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "\n##########################################################" << R << std::endl;
	std::cout << M << "----- Welcome to the Zombie program -----\n\n" << R;
	std::cout << C << "Testing Stack allocation using randomChump()\n" << R;

	randomChump("StackZombie");

	std::cout << C << "Testing Heap allocation using newZombie()\n" << R;
	
	Zombie	*heap = newZombie("HeapZombie");
	heap->announce();
	delete heap;

	std::cout << M << "---------- End of the program ------------" << R;
	std::cout << "\n##########################################################" << R << std::endl;

	return (0);
}
