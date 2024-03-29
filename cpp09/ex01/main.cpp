/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:02:21 by bepifani          #+#    #+#             */
/*   Updated: 2023/04/28 17:02:58 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Error: No inverted Polish mathematical expression provided." << std::endl;
        return 1;
    }

    std::stack<int> numbers;

    std::istringstream ss(argv[1]);

    std::string token;
    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (numbers.size() < 2) {
                std::cout << "Error: Insufficient operands for " << token << " operator." << std::endl;
                return 1;
            }
            int n2 = numbers.top(); numbers.pop();
            int n1 = numbers.top(); numbers.pop();
            int result;
            if (token == "+")
                result = n1 + n2;
            else if (token == "-")
                result = n1 - n2;
            else if (token == "*")
                result = n1 * n2;
            else if (token == "/") {
                if (n2 == 0) {
                    std::cout << "Error: Division by zero." << std::endl;
                    return 1;
                }
                result = n1 / n2;
            }
            numbers.push(result);
        }
        else {
            for(int i=0; token[i] !='\0'; i++) {
                if(token[i] < 48 || token[i] > 57) {
                    std::cout << "Error: bad input." << std::endl;
                    return 1;
                }
            }
            int num = atoi(token.c_str());
            numbers.push(num);
        }
    }

    if (numbers.size() != 1) {
        std::cout << "Error: Invalid input expression." << std::endl;
        return 1;
    }
    
    std::cout << numbers.top() << std::endl;
    return 0;
}