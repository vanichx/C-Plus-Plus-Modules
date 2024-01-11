/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:46:21 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/11 12:53:22 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include "../inc/Colors.h"

void printExitMsg(void) {
		std::cerr << " ______________________________________________ " << std::endl;
		std::cerr << "|      Please use the program as follows:      |" << std::endl;
		std::cerr << "|ˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉ|" << std::endl;
		std::cerr << "|./replace <filename>  <string #1>  <string #2>|" << std::endl;
		std::cerr << "|______________________________________________|" << std::endl;
}

void printNoFileMsg(void) {
	std::cerr << Y " =============================== " << std::endl;
	std::cerr << R "|  No such file or directory... |" << std::endl;
	std::cerr << Y " =============================== " R << std::endl;
}

void searchAndReplace(std::istream& in, std::ofstream& out, std::string const& neededString, std::string const& newString) {
	
	size_t index;
	std::string temp;

	while (std::getline(in, temp)) {
		index = 0;
		while ((index = temp.find(neededString, index)) != std::string::npos) {
			temp.erase(temp.begin() + index, temp.begin() + index + neededString.length());
			temp.insert(index, newString);
			index += newString.length();
		}
		out << temp;
	}
}

int main(int argc, char **argv) {
	
	if (argc == 4) {
		std::ifstream inFile;
		std::ofstream outFile;
		std::string inFileName = argv[1];
		std::string outFileName = inFileName + ".replace";
		
		inFile.open(inFileName.c_str());
		if (!inFile) {
			printNoFileMsg();
			return (1);	
		}
		outFile.open(outFileName.c_str());
		searchAndReplace(inFile, outFile, argv[2], argv[3]);
		inFile.close();
		outFile.close();
	}
	else {
		printExitMsg();
		return (1);
	}
	return (0);
}