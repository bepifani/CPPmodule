/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:37:25 by bepifani          #+#    #+#             */
/*   Updated: 2023/04/29 19:40:49 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <cstdio>

#define K 5

void insertionSortVec(std::vector<int>& A, int p, int q);
void mergeVec(std::vector<int>& A, int p, int q, int r);
void mergeInsertVec(std::vector<int>& A, int p, int r);

void insertionSortList(std::list<int>& A, int p, int q);
void mergeList(std::list<int>& A, int p, int q, int r) ;
void mergeInsertList(std::list<int>& A, int p, int r);

#endif