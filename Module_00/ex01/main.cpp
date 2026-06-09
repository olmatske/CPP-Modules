/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:38:59 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 14:01:36 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	PhoneBook p;
	std::string	prompt;

	while (true && prompt != "exit")
	{
		std::cout << "\n";
		std::cout << MAGENTA << "You have the following options:\n" << RESET;
		std::cout << "1. Add a contact:                       ADD\n";
		std::cout << "2. Search a contact:                    SEARCH\n";
		std::cout << "3.Exit the program and loose contacts:  EXIT\n\n";
		std::cout << CYAN << "Your choice: " << RESET;
		if (!(std::cin >> prompt)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << RED << "Input Error or EOF detected. Exiting safely." << RESET;
		}
		std::cout << std::endl;
	
		if (prompt == "add")
			p.add();
		
		if (prompt == "search")
			p.search();

		if (prompt == "exit")
			std::cout << std::endl;
	}
	return (0);
}

