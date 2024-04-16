/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpAndDownCasts.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:34:21 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 17:38:25 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Parent				 {};
class Child1 : public Parent {};
class Child2 : public Parent {};


int main( void ) 
{
	Child1 		a;
	
	Parent * 	b 	= &a;
	Parent * 	c 	= (Parent *) &a;
		
		
	Parent * 	d 	= &a;
	Child1 * 	e 	= d;
	Child2 * 	f 	= (Child2 *)d;

	return (0);

}