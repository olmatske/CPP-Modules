/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:34:28 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 16:54:10 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <limits>
#include <iomanip>


//////////////////////////////////////////////////////////////////
const std::string MAGENTA = "\033[1;35m";
const std::string CYAN = "\033[1;36m";
const std::string RED = "\033[1;31m";
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

		void	add();
		void	search();
} ;
#endif
//////////////////////////////////////////////////////////////////

