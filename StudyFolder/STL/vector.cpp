/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:07:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/16 14:13:34 by ipetruni         ###   ########.fr       */
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
	
	vector<int> myVector;
	
	myVector.push_back(2); // .popback() just add one more ellemet to the end of the vector
	myVector.push_back(44);
	myVector.push_back(77);
	myVector.push_back(9);

	// cout << myVector.size() << endl; // Method .size() returns to us the size of the vector.

	// cout << myVector.at(10) << endl; // Method .at() checks everytime that we are not out of biounds of the vector
	// cout << myVector[10] << endl; // In the same time the usual subsription operator doesnt do it , that's why the subscription operatoer works faster but he doesnot give us any guaranty that we are in the bounds;

	// myVector.clear(); // CLEARS THE VECTOR

	// myVector.pop_back(); // delete th last element in the vector

	// myVector.capacity();

	// cout << "size of vector "<< myVector.size() << endl;
	cout << "capacity of vector "<< myVector.capacity() << endl;


	// for (int i = 0; i < myVector.size(); i++)
	// {
	// 	cout << myVector[i] << endl;
	// }

	
	
	return (0);
}