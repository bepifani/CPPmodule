/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:04:26 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/22 15:00:04 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
		static std::string	names[5];
		int					index;
		std::string			filed[5];
public:
		Contact();
		~Contact();

		bool	set(int index);
		void	print();
		bool	cmp();
		void	print_f();
};

#endif