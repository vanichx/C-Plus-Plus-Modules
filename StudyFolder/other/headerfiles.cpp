/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfiles.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:50:44 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 14:08:23 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "headerfileLog.hpp"

void Log(const char* message) {
	std::cout << message << std::endl;
}

int main()
{
	Log("Hello World!");
}