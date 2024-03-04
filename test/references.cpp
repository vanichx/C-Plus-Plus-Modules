/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:52:29 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/04 21:01:16 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
    value++;
}

int main()
{
    int a = 5;

    Increment(a);

    LOG(a);

    
}