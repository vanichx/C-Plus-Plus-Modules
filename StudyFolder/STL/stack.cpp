/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:24:45 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/23 17:27:17 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

using namespace std;


/*
    STL

    std::stack
*/

int main()
{
    
    // stack<int> st;
    stack<int, vector<int>> st;
    
    // By default stack use a deque container but during creation of the container you can specify the type of container which will be behind stack
    st.__get_container();
    
    st.push(2);
    st.push(43);  // Methos push firstly creates a copy of a member that we wanna to add 
    st.push(3);
    // cout << "Size: " <<  st.size() << endl; // Return max size (lenght of container)
    // st.empty(); // Return true or false in case of container empty or not
    // st.pop(); // Delete from container latest element
    // cout << st.top() << endl; // Returns to us the value of the latest element

    // Unfortunately we can not iterate throught the stack that's why we cant call iterator in while loop

    // But we can extract the top element's by using .pop() an by helping of this we can imitate "iteration" through the stack

	

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
}