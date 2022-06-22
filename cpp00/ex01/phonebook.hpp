/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:03:09 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/22 16:16:57 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

# include "contact.hpp"

class PhoneBook
{
private:
		Contact contacts[8];
		int		max;
		int		current;
public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
};

#endif