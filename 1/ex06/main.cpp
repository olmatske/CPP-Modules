/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 08:20:01 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/17 10:27:27 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << RED << "UsageL ./harlFilter [level]" << R << std::endl;
		return (1);
	}
	
	Harl harl;
	std::string level = argv[1];
	int	levelNum = -1;

	if (level == "DEBUG") levelNum = 1;
	else if (level == "INFO") levelNum = 2;
	else if (level == "WARNING") levelNum = 3;
	else if (level == "ERROR") levelNum = 4;

	switch (levelNum) {
		case 1:
			std::cout << C << "\n [ D E B U G ]" << R << std::endl;
			harl.complain("DEBUG");
		case 2:
			std::cout << C << "\n [ I N F O ]" << R << std::endl;
			harl.complain("INFO");
		case 3:
			std::cout << C << "\n [ W A R N I N G ]" << R << std::endl;
			harl.complain("WARNING");
		case 4:
			std::cout << C << "\n [ E R R O R ]" << R << std::endl;
			harl.complain("ERROR");
			break;

		default:
			std::cout << "Probably complaining about Carl again..." << std::endl;
			break;
	}

	return (0);
}