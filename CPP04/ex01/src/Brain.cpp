/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:58:28 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 23:13:46 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default" GR " constructor " R "called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = other._ideas[i];
    }
}

Brain &Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assigment" BL " operator " R "called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            _ideas[i] = other._ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain" RD " destructor " R "called" << std::endl;
}