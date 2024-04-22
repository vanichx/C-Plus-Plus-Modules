/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:15:42 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/22 18:55:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

template <class Type,  typename Container = std::deque<Type> >
class MutantStack : public std::stack<Type>{
    public:
    // Constructors
        MutantStack() {};
        MutantStack(const MutantStack & other) : std::stack<Type>(other) {}
        MutantStack &operator=(const MutantStack & other) {
            if (this != &other) {
                std::stack<Type>::operator=(other);
            }
            return (*this);
        }
    // Destructor
        ~MutantStack() {};
    // Defining iterator for our MutantStack
        typedef typename std::stack<Type>::container_type::iterator iterator; // here we define the iterator which will directly access the underlying container
        iterator begin() { 
            return std::stack<Type>::c.begin(); // c represents the underlaying container of stack for example vector, list, and deque by default
        }
        iterator end() {
            return std::stack<Type>::c.end();
        }
};

#endif