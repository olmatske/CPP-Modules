/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:34:28 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 14:03:47 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#endif

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <limits>
#include <iomanip>

//////////////////////////////////////////////////////////////////
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RED = "\033[31m";
const std::string RESET = "\033[0m";
//////////////////////////////////////////////////////////////////
void	print_table_string(std::string value);
void	print_table_int(int value);
//////////////////////////////////////////////////////////////////
class Contact {
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
	
	private:
		std::string	darkest_secret;
} ;
//////////////////////////////////////////////////////////////////

// - ADD: save a new contact
// - SEARCH: display a specific contact (all the public data)
// - EXIT: program quits, contacts are lost forever
// - any other input is to be ignored
// - 8 contacts max, else replace oldest contact
class PhoneBook {

	Contact contacts[8];
	int	count;
	int nextIndex;

	public:
		PhoneBook() : count(0), nextIndex(0) {}

		void	add(void) {
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

		void	search(void) {
			if (count == 0) {
				std::cout << "There are no contacts to display.\n";
				std::cout << std::endl;
			}
			else {
				for (int i = 0; i < count; i++) {
					print_table_int(i);
					print_table_string(contacts[i].first_name);
					print_table_string(contacts[i].last_name);
					print_table_string(contacts[i].nickname);
					print_table_string(contacts[i].phone_number);
					std::cout << std::endl;
				}
			}
		}
} ;
//////////////////////////////////////////////////////////////////

