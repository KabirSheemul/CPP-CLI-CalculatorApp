#pragma once


class NativeCalculator;

ref class CalculatorManager {

	CalculatorWrap ^calculator;
	NativeCalculator *nativeCalculator;
public:
	CalculatorManager();
	System::String^ calculate(System::String^ inputStr);
	System::String^ calculateNative(System::String^ inputStr);
};
