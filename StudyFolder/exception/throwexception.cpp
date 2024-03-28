/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throwexception.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:32:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/28 15:58:01 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* wotking with exceptions 
	throw
	lesson 2
*/


void Foo(int value)
{
	if (value < 0)
	{
		throw exception();
	}
	
	
	cout << "Variable value = " << value << endl;
}

int main()
{
	try {
		Foo(-2);	
	}
	catch (const exception &ex)
	{
		cout << "We have catched " << ex.what() << endl;
	}
	
	


	
	return (0);	
}


