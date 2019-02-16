#include <iostream>

//Asks the number(s) used for the operation
double askNumber()
{
	std::cout << "Please enter a double: ";
	double x;
	std::cin >> x;
	return x;
}
//Asks a integer
int askInt()
{
	std::cout << "Please enter a integer: ";
	int x;
	std::cin >> x;
	return x;
}
//Asks which operator should be used
char askOperator()
{
	std::cout << "Please enter an operator, type h for the availible operators: ";
	char x;
	std::cin >> x;
	return x;
}