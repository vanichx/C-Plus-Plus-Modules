/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:04:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/22 16:50:56 by ipetruni         ###   ########.fr       */
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


template <typename T>
void easyfind(T someContainer, int valueNeeded) {
	
	typename T::iterator iter = find(someContainer.begin(), someContainer.end(), valueNeeded);
	
	if (iter == someContainer.end())
		throw std::out_of_range("Value is not found in this container.\n");
	else
		std::cout <<  "Value found : " << *iter << std::endl;
}

#endif