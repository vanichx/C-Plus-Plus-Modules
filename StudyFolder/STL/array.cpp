/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:07:04 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 14:23:52 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>

using namespace std;

/*
	STL
	
	array
*/

int main()
{
	array<int, 4> arr = { 11,22,33,44 }; // Here im creating this continer , first param is about the type of cont. and second about the num of elem in the container

	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	/* BECAUSE ITS STATIC ARRAY , WE CANT PUSH OR DELETE ELEMETNS FORM HERE */
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


	// ////////////////////////////////////
	// cout << arr.at(2) << endl; 
	// /* The diff beween .at() and [] is that .at chacks that current index exist */	
	// cout << arr[2] << endl;
	// ////////////////////////////////////
	
	// // method .fill() 
	// arr.fill(33); // fills all the elements with designated number
	// // method .fill()

	// // method .front() give access to the first element of the arrray 
	// arr.front();
	// // method .back() give access to the last element of the arrray 
	// arr.back();
	
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}