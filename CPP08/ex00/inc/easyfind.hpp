/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:04:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 18:11:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <list>
#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <exception>
#include <algorithm>
#include "Colors.h"

template <typename T>
void easyfind(T someContainer, int valueNeeded) {
	
	typename T::iterator iter = find(someContainer.begin(), someContainer.end(), valueNeeded);
	
	if (iter == someContainer.end())
		throw std::out_of_range(RD"Value is not found in this container.\n"R);

	else
		std::cout <<  "Value found : " GR BLD << *iter << R << std::endl;
}

#endif