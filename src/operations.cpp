#include <iostream>
#include <cmath>
#include "ask.h"

void addNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " + " << y << " = " << x + y << "\n";
}

void subtractNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " - " << y << " = " << x - y << "\n";
}

void multiplyNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " * " << y << " = " << x * y << "\n";
}

void divideNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " / " << y << " = " << x / y << "\n";
}

void divideNumbersWithRemainder()
{
	int xInt{ askInt() };
	int yInt{ askInt() };
	std::cout << xInt << " / " << yInt << " = " << xInt / yInt << "\n";
	std::cout << "Remainder: " << xInt % yInt << "\n";
}

void powerOf()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " ^ " << y << " = " << pow(x, y) << "\n";
}

void percentOf()
{
	double x{ askNumber() };
	std::cout << "The percentage form of " << x << " is " << x / 100 << "\n";
}