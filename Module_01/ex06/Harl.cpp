/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:53:29 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 19:42:31 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug( void ) {
	std::cout << "Caaaaaaaaaaarl, that kills people!" << R << std::endl;
}
void	Harl::_info( void ) {
	std::cout << "How could you not know that?!" << R << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "What happened to his hands? His hands. Why -Why are they Missing?" << R << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "Why on earth would you do that?! Caaaaaaaaaaarl!" << R << std::endl;
}

void	Harl::complain(std::string level) {
	typedef void	(Harl::*FunctionPtr)(void);

	FunctionPtr funcArray[] = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	std::string levelNames[] {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levelNames[i]) {
			(this->*funcArray[i])();
			return;
		}
	}

	std::cout << "Probably complaining about Carl again..." << R << std::endl;
}
