#pragma once
//#include "CalculatorWrap.h"

#include "NativeCalculator.h"


ref class CalculatorManager {

	CalculatorWrap ^calculator;
public:
	CalculatorManager();
	System::String^ calculate(System::String^ inputStr);
};
