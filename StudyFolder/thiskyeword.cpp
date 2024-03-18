/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thiskyeword.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:55:36 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 14:18:12 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class Point {

	private:
		int x;
		int y;
	
	public:
	
		Point()
		{
			x = 0;
			y = 0;
			cout << this << " constructor" << endl;

	
		}

		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
			cout << this << " constructor" << endl;
		}
		
		void SetY(int y)
		{
			this->y = y;
		}

		void SetX(int x)
		{
			this->x = x;
		}
		
		int GetX()
		{
			return (x);
		}

		int GetY()
		{
			return (y);
		}
		
		void Print()
		{
			cout << "X = " << x << "\t Y = " << y << endl;
		}
		
};



int main()
{
	Point a(10,9);
	a.SetY(5);
	a.Print();
}