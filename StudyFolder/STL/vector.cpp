/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:07:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 14:05:29 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

/*
	STL Library

	VECTOR
*/

int main()
{
	
	// vector<int> myVector; // init of vector when we dont know the size and all the rest staff
	vector<int> myVector(9, 77); // init of vector with spec size 
	// vector<int> myVector(4, 0); // init of vector with spec size and all the numbers will be initialized to the second parametr 
	
	// myVector.reserve(10000); // Increase the capacity of the vector 

	// cout << myVector.empty() << endl; // Just a check that our vector is not empty if return (1 - True , vector doesnot have any elements either return (0 - false , vector has some elements);
	

	// myVector.resize(20); // change the size of vector 

	// myVector.push_back(2); // .push_back() just add one more ellemet to the end of the vector
	myVector.push_back(44);
	myVector.push_back(44);
	myVector.push_back(44);
	myVector.push_back(44);
	myVector.push_back(44);
	myVector.push_back(44);
	// myVector.push_back(44);


	cout << "size of vector "<< myVector.size() << endl;
	cout << "capacity of vector "<< myVector.capacity() << endl;

	
	// myVector.shrink_to_fit(); // optimize the number of elements , in case you have a big capacity and small size

	// cout << "after" << endl;
	// cout << "size of vector "<< myVector.size() << endl;
	// cout << "capacity of vector "<< myVector.capacity() << endl;

	
	// cout << myVector.size() << endl; // Method .size() returns to us the size of the vector.

	// cout << myVector.at(9) << endl; // Method .at() checks everytime that we are not out of bounds of the vector
	// cout << myVector[9] << endl; // In the same time the usual subsription operator doesnt do it , that's why the subscription operatoer works faster but he doesnot give us any guaranty that we are in the bounds;

	// myVector.clear(); // CLEARS THE VECTOR

	// myVector.pop_back(); // delete th last element in the vector

	// myVector.capacity();


	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	
	
	return (0);
}