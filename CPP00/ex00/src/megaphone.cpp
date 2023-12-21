/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:43:10 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/21 21:59:28 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc > 1) {
        for(int i = 1; argv[i]; i++) {
            for (int j = 0; argv[i][j]; j++) {
                std::cout << (char) toupper(argv[i][j]);
            }
            if (argv[i + 1])
                std::cout << ' ';
        }
    } 
    else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}