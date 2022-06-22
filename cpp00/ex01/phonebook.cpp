/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:45 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/22 19:32:57 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->max = 8;
	this->current = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(void)
{
	if (this->current == this->max)
		this->current = 0;
	if (!(this->contacts[this->current].set(this->current)))
	{
		std::cout << "[ERROR] contact isn't added" << std::endl;
		return ;
	}
	this->current++;
}

void PhoneBook::search(void)
{
	std::string str;
	std::stringstream s;
	int index;

	std::cout << "|-------------------------------------------------------|" << std::endl;
	std::cout << "|    INDEX    | FIRST  NAME |  LAST NAME  |   NICKNAME  |" << std::endl;
	std::cout << "|-------------------------------------------------------|" << std::endl;
	int j =0;
	while (j < this->max)
	{
		if (this->contacts[j].cmp())
			this->contacts[j].print();
		j++;
	}
	std::cout << "|-------------------------------------------------------|" << std::endl;
	std::cout << "choose index: " << std::endl;	
	if (!std::getline(std::cin, str))
		return ;
	j = 0;
	while (j <= str.length())
	{
		if (!isdigit(str[j]))
		{
			std::cout << "[ERROR] wrong index" << std::endl;
			return ;
		}
		j++;
	}
	s << str;
	s >> index;
	if (index < 0 || index > 8)
	{
		std::cout << "[ERROR] wrong index" << std::endl;
	}
	this->contacts[index].print_f();
}