/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:03:19 by bepifani          #+#    #+#             */
/*   Updated: 2022/10/04 17:13:09 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->name = "";
}

Weapon::Weapon(std::string name)
{
	this->name = name;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->name = type;
}

std::string const &Weapon::getType(void)
{
	return (this->name);
}