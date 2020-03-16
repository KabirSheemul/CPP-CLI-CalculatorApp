// CalculatorWrap.cpp : main project file.

#include "stdafx.h"
#include "CalculatorWrap.h"
#include "Calculator.h"
#include "iostream"

using namespace System;


CalculatorWrap::CalculatorWrap() {
	cppCalculator  = new Calculator();
}

String^ CalculatorWrap::add(double first, double second) {
	return cppCalculator->add(first, second).ToString();
}

String^ CalculatorWrap::subtract(double minuend, double subtrahend) {
	return cppCalculator->subtract(minuend, subtrahend).ToString();
}

String^ CalculatorWrap::multiply(double multiplicand, double multiplier) {
	return cppCalculator->multiply(multiplicand, multiplier).ToString();
}

String^ CalculatorWrap::divide(double dividend, double divisor) {
	return cppCalculator->divide(dividend, divisor).ToString();
}
