/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:57:03 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/09 14:01:17 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <std::string>
#include <cctype>

using namespace std;

int	main(int argc, char **argv)
{
	(void)argc;
	if (argc == 1)
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			std::string	str = argv[i];
			for (size_t k = 0; k < str.length(); k++)
				str[k] = toupper(static_cast<unsigned char>(str[k]));
			std::cout << str << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
