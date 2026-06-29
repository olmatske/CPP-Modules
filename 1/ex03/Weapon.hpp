/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:03:04 by olmatske          #+#    #+#             */
/*   Updated: 2026/06/16 13:12:10 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {
	private:
		std::string _type;
	
	public:
		Weapon(const std::string &initialType);

		const std::string	&getType() const;
		void				setType( const std::string &newType );

		~Weapon();

};

#endif