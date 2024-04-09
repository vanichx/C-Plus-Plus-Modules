/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:26:17 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 17:33:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Type>
void swap(Type & n1, Type & n2) {
	Type n3 = n1;
		 n1 = n2;
		 n2 = n3;
}

template <typename Type>
Type min(Type & n1, Type & n2) {
	Type result;
	if (n1 == n2)
		return n2;
	else
		result = (n1 < n2) ? n1 : n2;
	return (result);
}

template <typename Type>
Type max(Type & n1, Type & n2) {
	Type result;
	if (n1 == n2)
		return n2;
	else
		result = (n1 > n2) ? n1 : n2;
	return (result);
}

#endif