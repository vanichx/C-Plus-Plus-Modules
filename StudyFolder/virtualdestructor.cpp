/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtualdestructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:26:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 17:44:38 by ipetruni         ###   ########.fr       */
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
			cout << "Memory allocated for the class A" << endl;
		}
		virtual ~A()
		{
			cout << "Memory for object class A freed" << endl;
		}
};


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
	
	A *bptr = new B;


	delete bptr;

	
	return (0);
}