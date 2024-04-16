/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtualdestructor copy.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:26:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 16:26:24 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class A
{
	public:
		A()
		{
			
		}
		virtual ~A() = 0;
};

A::~A() {}


class B : public A
{
	public:
		B()
		{
			cout << "Memory allocated for the class B" << endl;
		}
		~B()
		{
			cout << "Memory for object class B freed" << endl;
		}
	
};

int main()
{
	
	A                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;


	delete bptr;
	
	
	return (0);
}