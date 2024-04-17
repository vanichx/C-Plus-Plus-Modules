/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:13:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/17 15:16:06 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>

using namespace std;

/*
	STL

	list
*/


// Defined function to print all the values in the list containers
template <typename Type>
void PrintList(const list<Type> & lst)
{
	for (typename list<Type>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it)
	{
		cout << *it << endl;
	}
}
// Defined function to print all the values in the list containers

int main()
{
	// #1 CREATING THE LIST AND SHOWING SOME BASICS METHODS HOW TO WORK WITH LIST'S
	list<int> myList;

	myList.push_back(99); // Pushing one element to the end of the list 
	myList.push_back(15); // Pushing one element to the end of the list 
	myList.push_back(64); // Pushing one element to the end of the list 
	myList.push_back(99); // Pushing one element to the end of the list 
	myList.push_back(97); // Pushing one element to the end of the list 
	myList.push_back(54); // Pushing one element to the end of the list 
	myList.push_back(99); // Pushing one element to the end of the list 
	myList.push_back(99); // Pushing one element to the end of the list 
	myList.push_back(99); // Pushing one element to the end of the list 

	// /* Method .assign() */
	// list<int> myList2;

	// myList2.push_back(99); // Pushing one element to the end of the list 
	// myList2.push_back(15); // Pushing one element to the end of the list 
	// myList2.push_back(64); // Pushing one element to the end of the list 
	// myList2.push_back(64); // Pushing one element to the end of the list 


	// // myList.assign(myList2.begin(), myList2.end()); // This method clear all the list and assign the number of elem to the designated value 
	// // We can use this just for the initialization

	// // Also we can use this method for the coping the values from one list to another 

	// // cout << myList.size() << endl; // The size of the list was 8, and become 3

	// /* Method .assign() */


	// /* Method Remove */
	
	// list<int>::const_iterator it = myList.begin();

	// myList.remove(99); // Method remove accept in the parametrs the value to remove , if not found just do nothing , otherwise remove every occurance of this value 
	
	// PrintList(myList);
	// cout << endl;
	// /* Method Remove */


	// // Method erase
	// list<int>::const_iterator it  = myList.begin();
	// /*
	// 	In our case we are on the very beggining of the list and the first element will be deleted from the list 
	// */
	// myList.erase(it);
	// // Method erase

	// // Method insert !!!!!!!! ITERATOR NEEDED !!!!!!!
	// list<int>::const_iterator it  = myList.begin();

	// // Decremention and incremantion of the operators
	// // it++;
	// // it+=3; // ERROR the iterators for the list does not support this , this operator does not have any overload
	// // advance(it, 3); // THIS METHOD WILL SHIFT THE OPERATOR FOR THE THREE ELEMENTS AHEAD
	// PrintList(myList); //  Printing the elements before insertion 
	// // Decremention and incremantion of the operators
	// myList.insert(it, 10000); // first param iterator, and second param is value that we want to insert
	// // Method insert !!!!!!!! ITERATOR NEEDED !!!!!!!

	// // Method .unique()
	// myList.unique(); // Delete all the duplicates but which are in the raw  example b4: (99 15 64 99 979 54 99 99 99) after: (99 15 64 99 979 54 99);
	// // Method .unique()

	// // Method .reverse()
	// myList.reverse(); // Change all positions in the list vice versa
	// // Method .reverse()

	// // Method .clear()
	// myList.clear(); // Delete all the elements of the list , clear the list 
	// // Method .clear()

	PrintList(myList);

	// // Size of list 
	// cout << "size of list: " << myList.size() << endl;
	// // Size of list 

	// // Pop front
	// cout << ".pop_front(); called \n" << endl;
	// myList.pop_front(); // deletes the first element in the list
	// PrintList(myList);
	// // Pop front
	
	// // Pop back
	// cout << ".pop_back(); called \n" << endl;
	// myList.pop_back(); // deletes the last element in the list
	// PrintList(myList);
	// // Pop back

	// myList.sort(); // sorts values in the list container


	// list<int>::iterator it = myList.begin();

	// cout << *it << endl;

	// TRY TO DISPLAY ALL ELEMENTS TO THE TERMINAL 
	
	// for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
	// {
	// 	cout << *it << endl;
	// }
	// TRY TO DISPLAY ALL ELEMENTS TO THE TERMINAL 
	

	
	// #1 CREATING THE LIST AND SHOWING SOME BASICS METHODS HOW TO WORK WITH LIST'S
	
	return (0);	
}