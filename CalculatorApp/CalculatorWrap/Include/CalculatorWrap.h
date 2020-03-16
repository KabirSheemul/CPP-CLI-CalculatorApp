#pragma once
#include "Calculator.h"

public ref class CalculatorWrap {
private:
	Calculator *cppCalculator;

public:
	CalculatorWrap();
	System::String^ add(double first, double second);
	System::String^ subtract(double minuend, double subtrahend);
	System::String^ multiply(double multiplicand, double multiplier);
	System::String^ divide(double dividend, double divisor);
};
