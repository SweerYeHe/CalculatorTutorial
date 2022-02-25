#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case' ':
		return x * 10 + y;
	default:
		return 0.0;
	}
}
