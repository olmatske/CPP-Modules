/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:39:06 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/17 09:23:03 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

const std::string G = "\033[1;32m";
const std::string RED = "\033[1;31m";
const std::string R = "\033[0m";



int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << RED << "Usage: ./sed [filename] [string1] [string2]" << R << std::endl;
		return (1);
	}
	
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream infile(filename);
	if (!infile.is_open()) {
		std::cerr << RED << "Error: Could not open infile '" << filename << "'\n";
		return (1);
	}

	std::string	outFile = filename + ".replace";
	std::ofstream outfile(outFile);
	if (!outfile.is_open()) {
		std::cerr << RED << "Error: Could not open outfile '" << filename << "'\n";
		return (1);
	}

	if (s1.empty()) {
		outfile << infile.rdbuf();
		return (0);
	}

	std::stringstream	buffer;
	buffer << infile.rdbuf();
	std::string	content = buffer.str();

	size_t	pos = 0;

	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}

	outfile << content;
	std::cout << G << "Success" << R << std::endl;
	return (0);
}
