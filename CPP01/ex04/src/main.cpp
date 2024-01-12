/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:46:21 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 13:10:25 by ipetruni         ###   ########.fr       */
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

int replace(std::ifstream &in, std::ofstream &out, std::string const& neededString, std::string const& newString) {
	
	size_t index;
	std::string temp;

	if (neededString.empty()) {
		std::cerr << RD "Error: The string to be replaced cannot be empty." R << std::endl;
		return (1);
	}
	
	while (std::getline(in, temp)) {
		index = 0;
		while ((index = temp.find(neededString, index)) != std::string::npos) {
			temp.erase(temp.begin() + index, temp.begin() + index + neededString.length());
			temp.insert(index, newString);
			index += newString.length();
		}
		out << temp << std::endl;
	}
	
	in.close();
	out.close();
	return (0);
}

int main(int argc, char **argv) {
	
	if (argc == 4) {

		std::ifstream	inFile;
		std::ofstream	outFile;
		std::string		inFileName = argv[1];
		std::string		outFileName = inFileName + ".replace";
		std::string		firstString = argv[2];
		std::string		secondString = argv[3];
		
		inFile.open(inFileName.c_str());
		if (!inFile) {
			std::cerr << RD "Error while opening file: " R << inFileName << std::endl;
			return (1);	
		}
		
		inFile.seekg(0, std::ios::end);
		if (inFile.tellg() == 0) {
			std::cout << RD "Error: Input file is empty." R << std::endl;
			return (1);
		}
		inFile.clear();
		inFile.seekg(0, std::ios::beg);
		
		outFile.open(outFileName.c_str());
		if (!outFile) {
			std::cerr << RD "Error opening file for writing: " R << outFileName << std::endl;
			inFile.close();
			return (1);
		}		
		replace(inFile, outFile, firstString, secondString);

	}
	else {
		printExitMsg();
		return (1);
	}
	return (0);
}