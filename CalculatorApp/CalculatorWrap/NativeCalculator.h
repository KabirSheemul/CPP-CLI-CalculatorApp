#pragma once

#define NATIVE_EXPORT 1

#ifdef NATIVE_EXPORT
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API __declspec(dllimport)
#endif

#include "Calculator.h"
#include "string"

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

