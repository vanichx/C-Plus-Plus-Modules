/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:50:42 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/28 15:34:10 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "Colors.h"

using namespace std;


/* try catch lesson1 */


int main()
{
	
	



	std::string path = "/Users/ipetruni/Desktop/CPPGIT/StudyFolder/tes tfile";



	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	
	try	
	{
		cout << "Try #1" << endl;
		fin.open(path);
		cout << "File succesfully opened" << endl;
	}
	catch (const ifstream::failure & ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Error while opening!" << endl;
	}

	return (0);
	

	
}



