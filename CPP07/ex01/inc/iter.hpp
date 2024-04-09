/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:36:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 17:55:37 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include "Colors.h"

template <typename Type1, typename Type2, typename Type3>
void iter(Type1 address, Type2 length, Type3 func) {
	for (int i = 0; i < length; i++) {
		func(address[i]);
	}
}

#endif