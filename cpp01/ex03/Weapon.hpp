/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:03:01 by bepifani          #+#    #+#             */
/*   Updated: 2022/10/04 17:10:03 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
		std::string name;
public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void		setType(std::string type);
		std::string	const &getType(void);
};

#endif