/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:17:41 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/21 19:38:44 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << GR BLD "\tTest from the subject" R << std::endl;
    
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    
    std::stack<int> s(mstack);

    // // If you run it a first time with your MutantStack, and a second time replacing the MutantStack with,
    // // for example, a std::list, the two outputs should be the same.

    // std::cout << std::endl;
    // std::cout << Y BLD "\tTest with <list> container" R << std::endl;

    // std::list< int > lst;

    // lst.push_back(5);
    // lst.push_back(17);

    // std::cout << lst.back() << std::endl; 

    // lst.pop_back();
    // std::cout << lst.size() << std::endl;

    // lst.push_back(3);
    // lst.push_back(5);
    // lst.push_back(737);
    // lst.push_back(0);

    // std::list<int>::iterator lst_it = lst.begin();
    // std::list<int>::iterator lst_ite = lst.end();
    // ++it;
    // --it;
    // while (lst_it != lst_ite)
    // {
    //     std::cout << *lst_it << std::endl;
    //     ++lst_it;
    // }
    // std::list<int> l(lst);
    
    // // My tests 
    // std::stack<int> s(mstack); // Using the copy constructor creating the s stack;

    // if (s.empty())
    //     std::cout << "This stack is empty" << std::endl;
    // else
	//     std::cout << "Stack is not empty." << std::endl;
    
    // for (int i = 0; i < 10; ++i)
	//     mstack.push(i); // Pushing the elements in the s stack;

	// for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	//     std::cout << "Elements from the s stack :" GR << *it << R << std::endl; // Printing all the elements
    
    return 0;
}