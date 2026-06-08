/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:22:32 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 00:11:07 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static string	format(const string &s) {
	string str = s;

	if (str.length() > 10) {
		str = str.substr(0, 9);
		str += ".";
		return (str);
	}
	if (str.length() < 10) {
		string buffer(10 - str.length(), ' ');
		str = buffer + str;
	}

	return (str);
}

void	print_table_string(string value) {
	string formatted = format(value);
	cout << formatted << "|";
}

void	print_table_int(int value) {
	ostringstream oss;
	oss << value;
	string s = oss.str();

	string formatted = format(s);
	cout << formatted << "|";
}

