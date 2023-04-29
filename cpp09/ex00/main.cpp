/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:21:35 by bepifani          #+#    #+#             */
/*   Updated: 2023/04/28 16:21:47 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: could not open file."<< std::endl;
		exit(1);
	}
	std::map<std::string, double> _data = readData();
	checkInput(argv[1], _data);
	return 0;
}