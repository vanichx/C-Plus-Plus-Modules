/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:34:20 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 13:49:04 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int Multiply(int a, int b) {
	// return (a * b);
}

void MultiplyandLog(int a, int b) {
	int Result = Multiply(a, b);
	std::cout << Result << std::endl;
}

int main(void) {
	MultiplyandLog(3 ,4);
	MultiplyandLog(10, 10);

	return 0;
}