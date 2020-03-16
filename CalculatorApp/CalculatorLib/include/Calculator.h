#pragma once

#ifdef CALCULATORLIB_EXPORTS
#define CALCULATORLIB_API __declspec(dllexport)
#else
#define CALCULATORLIB_API __declspec(dllimport)
#endif


class CALCULATORLIB_API Calculator {

public:
	double add(double first, double second);
	double subtract(double minuend, double subtrahend);
	double multiply(double multiplicand, double multiplier);
	double divide(double dividend, double divisor);

};