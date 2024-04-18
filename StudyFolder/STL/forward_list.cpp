/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forward_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:34:36 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/17 18:10:30 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <forward_list>
#include <iostream>

using namespace std;

/*
	STL
	
	forward_list
*/

template <typename T>
void PrintList(const forward_list <T> & lst) {
	for (typename forward_list <T>::const_iterator i = lst.begin(); i != lst.end(); ++i) {
		cout << *i << endl;
	}
}

int main()
{
	forward_list<int> fl;

	fl.push_front(494);
	fl.push_front(94);
	fl.push_front(131);

	// PrintList(fl);

	// forward_list<int>::iterator it = fl.begin();


	// it++;
	// it--; //  We cannnot call this type of operator because its single link list (one way); Becuse here each element doesnt store the prev address 

	// 			WHY DO WE NEED
	// methods: .before_begin() and .cbefore_begin()

	// .cbefore_begin() RETURN TO US THE constant operator
	
	forward_list<int>::iterator it = fl.before_begin();
	
		
	fl.insert_after(it, 9999);

	PrintList(fl);

	return 0;
}