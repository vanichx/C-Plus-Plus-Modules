/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setandmultiset.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:23:55 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 16:49:29 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

using namespace std;


/*
	STL

	set

	multiset
*/

void printSet(const set<int> & someSet) {
	set<int>::const_iterator setIt = someSet.begin();

	for (; setIt != someSet.end(); setIt++) {
		cout << *setIt << endl;
	}
}

void printMSet(const multiset<int> & someSet) {
	multiset<int>::const_iterator setIt = someSet.begin();

	for (; setIt != someSet.end(); setIt++) {
		cout << *setIt << endl;
	}
}



int main()
{
	///////////////////////////////// SET /////////////////////////////////
	
	set<int> mySet;

	// INSERT METHOD
	mySet.insert(1);
	mySet.insert(1); // in case we want to add some values more and they are the same the set container will keep them in original form 
	mySet.insert(1); // it means only one value will be stored
	mySet.insert(1); // in our case its (1)
	mySet.insert(44);
	mySet.insert(5);
	mySet.insert(-2);
	mySet.insert(43);

	//				[5]
	//				/  \           //
	//			  [1]  [12]
	//			/*    \*/
	//		  [-1]	  [4]           //
	//				
	//				

	// printSet(mySet);

	// INSERT METHOD

	// HOW TO FIND THE ELEMENT IN THE SET CONTAINER??????

	// we need first to create an iterator because method find return to us the iterator in cae element was founded 

	set<int>::iterator it = mySet.find(4);

	cout << *it << endl;

	// HOW TO FIND THE ELEMENT IN THE SET CONTAINER?????
	///////////////////////////////// SET /////////////////////////////////





	///////////////////////////////// MULTI SET /////////////////////////////////
	
	multiset<int> myMSet;

	// INSERT METHOD
	myMSet.insert(1);
	myMSet.insert(1); // in case we want to add some values more and they are the same the set container will keep them in original form 
	myMSet.insert(1); // it means only one value will be stored
	myMSet.insert(1); // in our case its (1)
	myMSet.insert(44);
	myMSet.insert(5);
	myMSet.insert(-2);
	myMSet.insert(43);

	//				[5]
	//				/  \           //
	//			  [1]  [12]
	//			/*    \*/
	//		  [-1]	  [4]           //
	//				
	//				

	// printMSet(myMSet);

	// INSERT METHOD

	// HOW TO FIND THE ELEMENT IN THE SET CONTAINER??????

	// we need first to create an iterator because method find return to us the iterator in cae element was founded 

	// multiset<int>::iterator itMS = mySet.find(4);


	multiset<int>::iterator itMSlow = mySet.lower_bound(1);
	
	multiset<int>::iterator itMSup = mySet.upper_bound(1);
	
	cout << *itMSlow << endl;
	cout << *itMSup << endl;
	
	// HOW TO FIND THE ELEMENT IN THE SET CONTAINER?????
	///////////////////////////////// MULTI SET /////////////////////////////////
	return 0;
}