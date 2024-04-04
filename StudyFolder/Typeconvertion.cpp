/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeconvertion.c		                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:52:19 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 16:59:58 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void dump_32bits_integer(int const n) {
	std::cout << "n is " << n << "  ";
    for (int i = 31; i >= 0; --i) {
        std::cout << ((n >> i) & 1);
		if (i % 8 == 0)
			std::cout << " ";
    }
    std::cout << std::endl;
}

void dump_64bits_double(double const z) {
	std::cout << "z is " << z << "  ";
    uint64_t const* p = reinterpret_cast<uint64_t const*>(&z);
    for (int i = 63; i >= 0; --i) {
        std::cout << ((*p >> i) & 1);
		if (i == 63)
			std::cout << " ";
		if (i == 52)
			std::cout << " ";			
    }
    std::cout << std::endl;
}


int main(void) {
	int a = 42;
	double b = a;
	double c = (double) a;

	double d = a;
	int e = d;
	int f = (int) d;

	dump_32bits_integer( a );
	
	dump_64bits_double( b );
	dump_64bits_double( c );

	dump_64bits_double( d );
	dump_32bits_integer( e );
	dump_32bits_integer( f );
	
	return 0;
	
}