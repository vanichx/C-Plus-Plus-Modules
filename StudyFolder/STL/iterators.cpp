/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:38:14 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/17 11:43:21 by ipetruni         ###   ########.fr       */
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

	// // METHOD INSERT WHICH WORKING WITH ITERATORS ONLY
	// for (vector <int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	// {
	// 	cout << *i << endl;
	// 	if (i + 1 == myVector.end())
	// 		cout << endl;
	// }

	// vector <int>::iterator it = myVector.begin();
	
	// advance(it, 5); // If we want to give the iterator specialized index than we need to use advance function.

	// myVector.insert(it, 555); // Here we call insert method.

	
	// for (vector <int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	// {
	// 	cout << *i << endl;
	// 	if (i + 1 == myVector.end())
	// 		cout << endl;
	// }
	// // METHOD INSERT WHICH WORKING WITH ITERATORS ONLY



	// METHOD ERASE WHICH WORKING WITH ITERATORS ONLY
	for (vector <int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
		if (i + 1 == myVector.end())
			cout << endl;
	}

	vector <int>::iterator itErase = myVector.begin();

	cout << "Value which will be erased: " << *itErase << endl << endl;
	// myVector.erase(itErase); // Here we call ERASE method but only for one index.
	myVector.erase(itErase, itErase + 3); // Here we call ERASE method but for range fm: itErase to: itErase + 3.

	for (vector <int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
		if (i + 1 == myVector.end())
			cout << endl;
	}
	// METHOD ERASE WHICH WORKING WITH ITERATORS ONLY



	/// FUNCTION ADVANCE 
	// vector <int>::iterator it = myVector.begin();
	
	// myVector.insert()

	// cout << *(it + 3) << endl; 
	// 							// Those two operation make the same action , they shift the operator on 3 positions right
	// advance(it, 3);

	// cout << *it << endl; // Check the value of the iterator 


	
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