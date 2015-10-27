#include "Digits.h"
#include "Calculator.h"
#include <iostream>
#include <sstream>

int calculate(int number1, int number2, char operation){

	int result{};
	bool regularResult{false};

	switch(operation){
		case '+':
			result = number1 + number2;
			regularResult = true;
			break;
		case '-':
			result = number1 - number2;
			regularResult = true;
			break;
		case '*':
			result = number1 * number2;
			regularResult = true;
			break;
		case '/':
			if(number2 == 0){
				throw std::invalid_argument{"This is a Division with zero!"};
				break;
			}else{
				result = number1 / number2;
				regularResult = true;
				break;
			}
		case '%':
			result = number1 % number2;
			regularResult = true;
			break;
		default:
			throw std::invalid_argument{"I can't calculate this expression."};
	}

	if( result < 0 || result > 9999 ){
		throw std::invalid_argument{"Too large number to display."};
	}else if(regularResult){
		return result;
	}
	return -1;
}


int calculate(std::istream &inputStream){
	int number1{};
	int number2{};
	char op{};
	std::string myLine{};

	getline(inputStream, myLine);
	std::stringstream stringinput{myLine};

	stringinput >> number1,
	stringinput >> op;
	stringinput >> number2;

	return calculate(number1, number2, op);
}
