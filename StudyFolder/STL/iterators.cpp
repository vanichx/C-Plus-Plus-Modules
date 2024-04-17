/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:38:14 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/17 11:23:18 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

/*
	STL Lib

	iterators
*/

int main()
{
	vector <int> myVector; // Here we have create vector and then init it with 10 values from 1 to 10;
	for (int i = 1; i <= 10; i++) {
		myVector.push_back(i);
	}


	/// FUNCTION ADVANCE 
	vector <int>::iterator it = myVector.begin();
	
	cout << *(it + 3) << endl; 
								// Those two operation make the same action , they shift the operator on 3 positions right
	advance(it, 3);

	cout << *it << endl; // Check the value of the iterator 


	
	/// FUNCTION ADVANCE




	// vector <int>::iterator it; // Here we have create the itterator;
	
	
	// it = myVector.begin(); // By this piece of code we can have an access to the first element of the vector

	// *it = 1000; // Since we are knowing the position of the operator we can change the value at current iterrator index.

	// it++; // This ++ operation change the position of the iterator by one fwd ;
	// it += 2; // This +=2 operation change the position of the iterator on + 2 elem;
	// it--; // This -- operation change the position of the iterator by one bck ;
	
	// for (vector <int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	// {																			// Here we are using usual iterator , this iterator has access to read and write
	// 	cout << *i << endl;
	// } 
	
	

	// for (vector <int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) // Using REVERSE ITERATOR METHOD REND
	// {																			// Here we are using usual iterator , this iterator has access to read and write
	// 	cout << *i << endl;
	// } 
	

	// for (vector <int>::const_iterator i = myVector.begin(); i != myVector.end(); i++)
	// {																			// Here we are using const iterator , this iterator has access to read only 
	// 	cout << *i << endl;
	// } 
	
	
	

	// cout << *it << endl; // By using the * dereference we can know the value at which is currently the operator is.
	
	
	return (0);
}