/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:22:32 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 14:06:23 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static std::string	format(const std::string &s) {
	std::string str = s;

	if (str.length() > 10) {
		str = str.substr(0, 9);
		str += ".";
		return (str);
	}
	if (str.length() < 10) {
		std::string buffer(10 - str.length(), ' ');
		str = buffer + str;
	}

	return (str);
}

void	print_table_string(std::string value) {
	std::string formatted = format(value);
	std::cout << formatted << "|";
}

void	print_table_int(int value) {
	std::ostringstream oss;
	oss << value;
	std::string s = oss.str();

	std::string formatted = format(s);
	std::cout << formatted << "|";
}

