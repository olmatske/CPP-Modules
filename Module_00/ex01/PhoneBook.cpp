/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:19:20 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 17:19:47 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add() {
	Contact New;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "First Name: ";
	getline(std::cin, New.first_name);
	std::cout << "Last Name: ";
	getline(std::cin, New.last_name);
	std::cout << "Nickname: ";
	getline(std::cin, New.nickname);
	std::cout << "Phone Number: ";
	getline(std::cin, New.phone_number);

	contacts[nextIndex] = New;
	if (count < 8)
		count++;
	nextIndex = (nextIndex + 1) % 8;
	std::cout << MAGENTA << "\n*** You added a contact ***\n" << RESET;
}

////////////////////////////////////////////////////////////////////////////////////////////

void	PhoneBook::search() {
	if (count == 0) {
		std::cout << "There are no contacts to display.\n";
		std::cout << std::endl;
		return;
	}

	for (int i = 0; i < count; i++) {
		print_table_int(i);
		print_table_string(contacts[i].first_name);
		print_table_string(contacts[i].last_name);
		print_table_string(contacts[i].nickname);
		print_table_string(contacts[i].phone_number);
		std::cout << std::endl;
	}
	std::string input;
	std::cout << MAGENTA << "\nWhat index would you like to have displayed?\n" << RESET;
	std::cout << CYAN << "Index: " << RESET;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(std::cin, input);

	int display = 0;
	std::stringstream ss(input);
	if (!(ss >> display)) {
		std::cout << RED << "Invalid input. Please enter a valid number.\n" << RESET;
		return;
	}
	if (display < 0 || display >= count) {
		std::cout << RED << "\nInvalid index. Please enter a number between 0 and " << count - 1 << ".\n" << RESET;
		return;
	}

	std::cout << "First Name: " << contacts[display].first_name << "\n";
	std::cout << "Last name:  " << contacts[display].last_name << "\n";
	std::cout << "Nickname:   " << contacts[display].nickname << "\n";
	std::cout << "Phone:      " << contacts[display].phone_number << "\n";
	std::cout << std::endl;
	return;
}
