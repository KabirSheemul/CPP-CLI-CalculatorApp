#include "stdafx.h"
#include "Calculator.h"
#include "iostream"

CALCULATORLIB_API double Calculator::add(double first, double second) {
	return first + second;
}

CALCULATORLIB_API double Calculator::subtract(double minuend, double subtrahend) {
	return minuend - subtrahend;
}

CALCULATORLIB_API double Calculator::multiply(double multiplicand, double multiplier) {
	return multiplicand * multiplier;
}

CALCULATORLIB_API double Calculator::divide(double dividend, double divisor) {
	try
	{
		return dividend / divisor;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
