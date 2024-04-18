/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:50:27 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 17:34:56 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/*

	STL

	ALGORITHMS

	FIND

	std::find, std::find_if, std::find_if_not
*/

class Person 
{
	public:
		Person(string name, double score)
		{
			this->Name = name;
			this->Score = score;
		}

		bool operator()(const Person &p)
		{
			return p.Score > 180;
		}

		string Name;
		double Score;
};

int main()
{
	vector<int> v;
	v.push_back(6);
	v.push_back(4);
	v.push_back(4);
	v.push_back(12);
	// v.push_back(1);
	v.push_back(2);
	// v.push_back(7);

	vector<int>::iterator resultOfFind = find(v.begin(), v.end(), 122);

	if (resultOfFind == v.end())
	{
		cout << "Num was NOT found" << endl;
	}
	else
	{
		cout << "Num was found" << endl;
	}

	// vector<int>::iterator resultOfFindIf = find_if(v.begin(), v.end(), [](int a)
	// {
	// 	return a % 2 == 0;
	// });

	// if (resultOfFindIf == v.end())
	// {
	// 	cout << "Num was NOT found" << endl;
	// }
	// else
	// {
	// 	cout << "Num was found" << endl;
	// }

	return (0);
}