/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:59:51 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:37:14 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

const std::string M = "\033[1;35m";
const std::string G = "\033[1;32m";
const std::string C = "\033[1;36m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";

int	main() {
	std::cout << G << "_________________________________________________________\n" << R << std::endl;
	std::cout << M << "--- Welcome to the Gladiator program ---" << R << std::endl;

	std::cout << C << "\n--- Creating the weapons ---" << R << std::endl;
	Weapon thunderbolt("Thunderbolt");
	Weapon bident("Bident");

	std::cout << C << "\n--- Creating the opponents ---" << R << std::endl;
	HumanA zeus("Zeus", thunderbolt);
	HumanB hades("Hades");

	std::cout << C << "\n--- Round one ---" << R << std::endl;
	zeus.attack();
	hades.attack();

	std::cout << C << "\n--- Round two ---" << R << std::endl;
	hades.setWeapon(bident);
	zeus.attack();
	hades.attack();

	std::cout << M << "\n--- End of the Gladiator program ---" << R << std::endl;
	std::cout << G << "_________________________________________________________" << R << std::endl;

	return (0);
}

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return 0;
// }
