/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 14:44:20 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/15 14:59:43 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const std::string M = "\033[1;35m";
const std::string C = "\033[1;36m";
const std::string G = "\033[1;32m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";

////////////////////////////////////////////////////////////////////////////////
int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << G << "_____________________________________________________\n" << R << std::endl;
	std::cout << M << "--- Testing Pointers ---\n" << R;
	std::cout << C << "Memory:\n" << R;
	std::cout << &str << "\n" <<
				 stringPTR << "\n" <<
				 &stringREF << "\n\n";

	std::cout << C << "Value:\n" << R;
	std::cout << str << "\n" <<
				 *stringPTR << "\n" <<
				 stringREF << "\n";

std::cout << M << "--- End of Test ---\n" << R;
	std::cout << G << "_____________________________________________________\n" << R << std::endl;
}
