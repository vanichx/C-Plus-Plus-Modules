/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templetes.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:10:02 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 15:38:55 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T,int N>
class Array 
{
	private:
		T m_Array[N];
	public:
		int GetSize() const { return N; }
};

int main()
{
	Array<int, 5> array;
	
	std::cout << array.GetSize() << std::endl;

}