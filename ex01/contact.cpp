/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:04:39 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/22 19:26:37 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::names[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Secret"
};

Contact::Contact()
{
	for (size_t	i = 0; i < 5; i++)
		this->filed[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set(int index)
{
	this->index = index;
	int i = 0;
	while (i < 5)
	{
		std::cout << Contact::names[i] << ": ";
		if (!std::getline(std::cin, this->filed[i]))
			return (false);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		if (this->filed[i].length() == 0)
		{
			for (int j = 0; j < 5; j++)
				this->filed[j] = std::string();
			return (false);
		}
		i++;
	}
	return (true);
}

void Contact::print()
{
	std::cout << "|" << std::setw(13) << this->index;
	int i = 0;
	while (i < 3)
	{
		std::cout << "|";
		if (this->filed[i].length() > 10)
			std::cout << this->filed[i].substr(0,9) << ".";
		else
			std::cout << std::setw(13) << this->filed[i];
		i++;
	}
	std::cout << "|" << std::endl;
}

void Contact::print_f()
{
	if (this->filed[0].length() == 0)
	{
		std::cout << "[ERROR] wrong index" << std::endl;
		return ;
	}
	int i = 0;
	while (i < 5)
	{
		std::cout<< this->names[i] << " : " << this->filed[i] << std::endl;
		i++;
	}
}

bool Contact::cmp()
{
	if (this->filed[0].length() > 0)
		return (true);
	return (false);
}