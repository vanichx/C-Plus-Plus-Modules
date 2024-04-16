/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:16:43 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 17:39:57 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Parent					{};
class Child1 : public Parent	{};
class Child2 : public Parent	{};

class Unrelated					{};

int main(void) 
{
	Child1 a;
	
	Parent * b = &a;

	Child1 * c = b;

	Child2 * d = static_cast<Child2 *>(b);
	
	Child2 * d = (Child2 *)(b);

	Unrelated * e = static_cast<Unrelated *>(&a);

	// std::cout << "a is " << a << " b is " << b << " c is " << c << " d is " << d << std::endl;

	return (0);

}