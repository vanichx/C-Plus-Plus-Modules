/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:45:13 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 20:49:18 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    char* buffer = new char[8];

    memset(buffer, 0, 8);

    char** ptr = &buffer;
    
    delete[] buffer;
}