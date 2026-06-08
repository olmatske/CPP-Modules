/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:38:59 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 00:04:15 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	PhoneBook p;
	string	prompt;

	while (true && prompt != "exit")
	{
		cout << "\n";
		cout << MAGENTA << "You have the following options:\n" << RESET;
		cout << "1. Add a contact:                       ADD\n";
		cout << "2. Search a contact:                    SEARCH\n";
		cout << "3.Exit the program and loose contacts:  EXIT\n\n";
		cout << CYAN << "Your choice: " << RESET;
		if (!(cin >> prompt)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << RED << "Input Error or EOF detected. Exiting safely." << RESET;
		}
		cout << endl;
	
		if (prompt == "add")
			p.add();
		
		if (prompt == "search")
			p.search();
			
		// cout << endl;
		if (prompt == "exit")
			exit(0);
	}
	return (0);
}

