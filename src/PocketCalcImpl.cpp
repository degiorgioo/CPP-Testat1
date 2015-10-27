#include "Calculator.h"
#include "Digits.h"
#include <iostream>
#include "PocketCalculator.h"


void pocketCalculation(std::istream &inputStream, std::ostream &outputStream){
	while(inputStream){
		try{
			printLargeNumber(calculate(inputStream), outputStream);
		}catch(std::exception& e){
			printError(outputStream);
		}
	}
}
