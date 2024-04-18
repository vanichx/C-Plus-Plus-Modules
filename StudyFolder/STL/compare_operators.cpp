/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_operators.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:25:18 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 14:37:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
using namespace std;







int main()
{
	array<int, 4> arr = { 11, 22, 33, 4 };
	
	array<int, 4> arr2 = { 11, 22, 33, 44 };
	
	// bool result = (arr == arr2); // if the first arr equal second arr return 1 (true)


	bool result = (arr > arr2); // if the first arr bigger than second arr return 1 (true)
	
	cout << result << endl;
	
}