/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:16:43 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:34:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


using namespace std;

int main() 
{
	int			a = 30;
	
	double		b = 4.1;

	cout << a / b << endl;
	cout << int(a / b) << endl;
}