/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:57:03 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/08 14:38:27 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int	main(int argc, char **argv)
{
	(void)argc;
	if (argc == 1)
		cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			string	str = argv[i];
			for (size_t k = 0; k < str.length(); k++)
				str[k] = toupper(static_cast<unsigned char>(str[k]));
			cout << str << " ";
		}
	}
	cout << endl;
	return (0);
}
