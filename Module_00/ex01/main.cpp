/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:38:59 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/08 20:05:38 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	PhoneBook p;
	string	prompt;

	while (prompt != "exit")
	{
		cout << "You have the following options:\n1. Add a contact:                       ADD\n";
		cout << "2. Search a contact:                    SEARCH\n";
		cout << "3.Exit the program and loose contacts:  EXIT\n\n";
		cout << "Your choice: ";
		cin >> prompt;
		cout << endl;
	
		if (prompt == "add")
			p.add();
		
		if (prompt == "search")
			p.search();
		cout << endl;
	}
	return (0);
}

