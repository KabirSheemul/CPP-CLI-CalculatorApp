#pragma once

#include "string"
#include "Symbols.h"

class Calculator;

class EXPORT_API NativeCalculator {
private:
	Calculator *calculator;

public:
	NativeCalculator();
	std::string add(double first, double second);
	std::string subtract(double minuend, double subtrahend);
	std::string multiply(double multiplicand, double multiplier);
	std::string divide(double dividend, double divisor);
};

