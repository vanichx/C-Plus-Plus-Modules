/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3throwexception.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:32:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/28 16:18:55 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* wotking with exceptions 
	throw
	lesson 4 122
*/


class MyException 
{
	public:
	private:
};


void Foo(int value)
{
	if (value < 0)
	{
		// throw exception();
		throw "Number less than 0";
		
	}
	if (value == 1)
	{
		throw MyException();
	}

	cout << "Variable value = " << value << endl;
}

int main()
{
	try {
		// Foo(-2);
		// Foo(0);
		Foo(1);
	}
	catch (const exception &ex)
	{
		cout << "Block #1 We have catched " << ex.what() << endl;
	}
	catch (const char *ex)
	{
		cout << "Block #2 We have catched " << ex << endl;
	}
	catch (...)
	{
		cout << "Block #3 We have catched something" << endl;
	}
	


	
	return (0);	
}


