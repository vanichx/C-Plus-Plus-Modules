/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initlist.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:37:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/15 14:59:40 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Example
{
	private:
		/* data */
	public:
		Example()
		{
			std::cout << "Created Entity!" << std::endl;
		}
		Example(int x)
		{
			std::cout << "Created Entity with " << x << "!" << std::endl;
		}
};

class Entity
{
	
	private:
		std::string m_Name;
		Example m_Example;
	public:

		Entity() : m_Example(8)
		{
			m_Name =  std::string("Unknown");
		}

		Entity(const std::string& name)
		{
			m_Name = name;
		}
		
		const std::string& GetName() const {return m_Name;}
			
};



int main()
{
	Entity e0;
	
	std::cin.get();
}