#include "stdafx.h"
#include "NativeCalculator.h"
#include "Calculator.h"
#include "iostream"
#include "string"

using namespace std;




NativeCalculator::NativeCalculator() {
	calculator = new Calculator();
}

string NativeCalculator::add(double first, double second) {
	return to_string(calculator->add(first, second));
}

string NativeCalculator::subtract(double minuend, double subtrahend) {
	return to_string(calculator->subtract(minuend, subtrahend));
}

string NativeCalculator::multiply(double multiplicand, double multiplier) {
	return to_string(calculator->multiply(multiplicand, multiplier));
}

string NativeCalculator::divide(double dividend, double divisor) {
	return to_string(calculator->divide(dividend, divisor));
}