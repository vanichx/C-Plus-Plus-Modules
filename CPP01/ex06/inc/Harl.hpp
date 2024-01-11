/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:16:48 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/11 10:16:50 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include "Colors.h"

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	exit(void);
	public:
		Harl();
		~Harl();
	public:
		void	complain(std::string level);
};


#endif