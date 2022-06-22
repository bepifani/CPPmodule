/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:34:54 by bepifani          #+#    #+#             */
/*   Updated: 2022/06/20 21:51:15 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (argc > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i][j];
			j++;
		}
		std::cout << std::endl;
		i++;
	}
}