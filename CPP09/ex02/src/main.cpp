/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:54 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 16:12:00 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc >= 2) {
		try {
			PmergeMe Obj;

			Obj.assignVector(argv);
			Obj.assignList(argv);
			Obj.sortAndPrint();
			
		} catch (std::exception & ex) {
			std::cout << ex.what() << std::endl;
			return 1;
		}

	} 
	else {
		std::cerr << "Error: No sequence provided" << std::endl;
		return 1;
	}

	return 0;
}