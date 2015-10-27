#include "Digits.h"
#include <iostream>
#include <ostream>
#include <iterator>
#include <string>

void printLargeNumber(int i, std::ostream &outputStream){

	std::vector<std::vector<std::string>> numbersToPrint{};

	do{
		numbersToPrint.insert(begin(numbersToPrint), numbers[i % 10]);
		i /= 10;
	}while(i);

	for(int z{}; z < 5; z++){
		for(auto const line: numbersToPrint){
			outputStream << line[z];
		}
		outputStream << "\n";
	}
}

void printError(std::ostream &outputStream){
	for(int z{}; z < 5; z++){
		for(auto const line: error){
			outputStream << line[z];
		}
		outputStream << "\n";
	}
}
