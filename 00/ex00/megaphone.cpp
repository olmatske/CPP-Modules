/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:57:03 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/08 14:01:43 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int	main(int argc, char **argv)
{
	(void)argc;
	for (int i = 1; argv[i]; i++)
	{
		string	str = argv[i];
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str << " ";
	}
	cout << endl;
}
