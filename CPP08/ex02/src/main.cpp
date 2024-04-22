/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:17:41 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/22 19:04:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "\tTest from the subject" << std::endl;
    
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
    
    return 0;
}