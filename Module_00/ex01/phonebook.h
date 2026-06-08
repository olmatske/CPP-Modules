/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:34:28 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/08 20:29:22 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#endif

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;
//////////////////////////////////////////////////////////////////
void	print_table_string(string value);
void	print_table_int(int value);
//////////////////////////////////////////////////////////////////
class Contact {
	public:
		string	first_name;
		string	last_name;
		string	nickname;
		int		phone_number;
	
	private:
		string	darkest_secret;
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
			cout << "First Name: ";
			cin >> New.first_name;
			cout << "Last Name: ";
			cin >> New.last_name;
			cout << "Nickname: ";
			cin >> New.nickname;
			cout << "Phone Number: ";
			cin >> New.phone_number;
			
			contacts[nextIndex] = New;
			if (count < 8)
				count++;
			nextIndex = (nextIndex + 1) % 8;
			cout << "\n*** You added a contact ***\n";
		}

		void	search(void) {
			if (count == 0) {
				cout << "There are no contacts to display.\n";
				cout << endl;
			}
			else {
				for (int i = 0; i < count; i++) {
					print_table_int(i);
					print_table_string(contacts[i].first_name);
					print_table_string(contacts[i].last_name);
					print_table_string(contacts[i].nickname);
					print_table_int(contacts[i].phone_number);
					cout << endl;
				}
			}
		}
} ;
//////////////////////////////////////////////////////////////////

