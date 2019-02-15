#include <iostream>
#include "operations.h"
#include "ask.h"

//Does the calculations using the number(s) and operator entered
void doCalculations()
{
	char z{ askOperator() };

	if (z == '+')
		addNumbers();
	else if (z == '-')
		subtractNumbers();
	else if (z == '*')
		multiplyNumbers();
	else if (z == '/')
		divideNumbers();
	else if (z == '%')
		divideNumbersWithRemainder();
	else if (z == '^')
		powerOf();
	else if (z == '#')
		percentOf();
	else 
		std::cout << "You have entered an incorrect symbol, please restart the program";
}

