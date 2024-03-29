/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4throwexception.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:32:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/29 11:17:09 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* creating own exeption
	lesson 5 123
*/


class MyException :public exception
{
	public:
		MyException(const char *msg, int dataState) : exception() 
		{
			this->dataState = dataState;
		}
		int GetDataState()
		{
			return dataState;
		}
	private:
		int dataState;
};


void Foo(int value)
{
	if (value < 0)
	{
		throw exception();
		throw "Number less than 0";
		
	}
	if (value == 1)
	{
		throw MyException("Value = 0", value);
	}

	cout << "Variable value = " << value << endl;
}

int main()
{
	try {
		// Foo(-2);
		// Foo(0);
		Foo(-1);
	}
	catch (MyException &ex)
	{
		cout << "Block #1 We have catched " << ex.what() << endl;
		cout << "Block #1 GetDataState() value = " << ex.GetDataState() << endl;
	}
	catch (exception &ex)
	{
		cout << "Block #2 We have catched " << ex.what() << endl;
		// cout << "Block #2 GetDataState() value = " << ex.GetDataState() << endl;
	}


	return (0);	
}


