/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefixAndPostfix.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:38:10 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/17 17:14:32 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>

using namespace std;

/*
	STL 

	Difference between prefix and postfix operators
	
*/



template <typename T>
void PrintList(const list<T> & lst) 
{
	for (typename list<T>::iterator i = lst.cnegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	list<int>::iterator it;

	it++;

	++it;


	return 0;
}