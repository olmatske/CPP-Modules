/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:28:53 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 19:39:34 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl harl;

	std::cout << G << "========================================================\n" << R << std::endl;
	std::cout << M << "          ======= Testing Valid Levels =======          " << R << std::endl;

	std::cout << C << "\n [ D E B U G ]" << R << std::endl;
	harl.complain("DEBUG");

	std::cout << C << "\n [ I N F O ]" << R << std::endl;
	harl.complain("INFO");

	std::cout << C << "\n [ W A R N I N G ]" << R << std::endl;
	harl.complain("WARNING");

	std::cout << C << "\n [ E R R O R ]" << R << std::endl;
	harl.complain("ERROR");

	std::cout << G << "\n---------------------------------------------------------" << R;
	std::cout << M << "\n          ======= Testing Inalid Levels ========         " << R << std::endl;
	
	std::cout << C << "[ T R A C E ]" << R << std::endl;
	harl.complain("TRACE");
	
	std::cout << C << "\n[ P O T A T O ]" << R << std::endl;
	harl.complain("POTATO");

	std::cout << C << "\n[ d e b u g ]" << R << std::endl;
	harl.complain("debug");

	std::cout << G << "========================================================\n" << R << std::endl;
	return (0);
}