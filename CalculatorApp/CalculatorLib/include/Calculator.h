#pragma once
#include "Symbols.h"


class CALCULATORLIB_API Calculator {

public:
	double add(double first, double second);
	double subtract(double minuend, double subtrahend);
	double multiply(double multiplicand, double multiplier);
	double divide(double dividend, double divisor);

};