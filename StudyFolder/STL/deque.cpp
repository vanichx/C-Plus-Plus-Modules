/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:54:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 15:22:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>

using namespace std;

/*
	STL

	deque (double-ended queue)

	in deque container each element of the container knows about the next one , and each elem represent a small dynamic array

	this is basicly double link list of the vectors


	[ 0 | 1 | 2 ] ---> [ 3 | 4 | 5 ] ---> [ 6 | 7 | 8 ]
	if we are trying to access the elem which is inside small cmantainer it will be fast for example 2;
	but if we will try 6 will be slower than in the vector because we need to iterate between containers;
	deque its a kind of hybrid between vector and list
*/

int main()
{
	deque<int> dq;
	
	dq.push_back(1);
	dq.push_back(9);
	dq.push_back(94);

	deque<int>::iterator it = dq.begin();
	

	return 0;
}