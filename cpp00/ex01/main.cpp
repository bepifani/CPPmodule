/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:52:33 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/22 15:18:52 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
	PhoneBook book;
	std::string str;

	while (1)
	{
		std::cout << ">";
		if(!std::getline(std::cin, str))
			break ;
		if (str == "ADD")
			book.add();
		else if (str == "SEARCH")
			book.search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "wrong command" << std::endl;
	}
	return (0);
}