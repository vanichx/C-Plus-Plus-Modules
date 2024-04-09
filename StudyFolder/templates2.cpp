/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:53:35 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 17:04:58 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


using namespace std;


template<typename Type>
void Sum(Type firstparam)
{
	cout << firstparam << endl;
}

// int Sum(int a, int b)
// {
// 	return (a + b);
// }

// double Sum(double a, double b) 
// {
// 	return a + b;
// }

int main()
{
	// cout << Sum(5, 6) << endl;
	// cout << Sum(4, 4.2) << endl;
	Sum(1, 3);

}


// template<class Type>
// void Sum(Type firstparam)
// {
// 	cout << firstparam << endl;
// }

// // int Sum(int a, int b)
// // {
// // 	return (a + b);
// // }

// // double Sum(double a, double b) 
// // {
// // 	return a + b;
// // }

// int main()
// {

// 	Sum(1);

// }