/*
 * Author: CLEMENT MINDJIMBA
 * 
 * Thursday,September 21
 * Simple Calculator
 */
# include <stdio.h>
#include <cstdlib>
using namespace std;

enum Operations ={ PLUS = '+', MINUS = '-', DIVIDE = '/', MULTIPLY = '*' };

int main() 
{
	double firstNumber, secondNumber;

	cout << "Enter an operator (+, -, *,): " << endl;
	cin >> Operations;

	cout << "Enter two operands: " << endl;
	cin >> &firstNumber, &secondNumber;

	switch (Operations)
	{
		case '+':
			cout << firstNumber + secondNumber << endl;
			break;
		case '-':
			cout << firstNumber - secondNumber << endl;
			break;
		case '*':
			cout << firstNumber * secondNumber << endl;
			break;
		case '/':
			cout << firstNumber / secondNumber << endl;
			break;
		default:
			cout << "Error! operator is not correct" << endl;
	}

	return 0;
}
