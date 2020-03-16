#include "stdafx.h"
#include "string"
#include "CalculatorManager.h"
#include "NativeCalculator.h"

using namespace System;

CalculatorManager::CalculatorManager() {
	calculator = gcnew CalculatorWrap();
	nativeCalculator = new NativeCalculator();
}

String^ CalculatorManager::calculate(String^ inputStr) {
	array<String^> ^inputDelimeter = inputStr->Split(' ');

	if (inputDelimeter[1] == gcnew String("+")) {
		return calculator->add(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2]));
	}
	else if (inputDelimeter[1] == gcnew String("-")) {
		return calculator->subtract(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2]));
	}
	else if (inputDelimeter[1] == gcnew String("*")) {
		return calculator->multiply(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2]));
	}
	else if (inputDelimeter[1] == gcnew String("/")) {
		return calculator->divide(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2]));
	}

	String ^result = L"";
	return result;
}

String^ CalculatorManager::calculateNative(String^ inputStr) {
	array<String^> ^inputDelimeter = inputStr->Split(' ');

	if (inputDelimeter[1] == gcnew String("+")) {
		return gcnew String(nativeCalculator->add(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2])).c_str());
	}
	else if (inputDelimeter[1] == gcnew String("-")) {
		return gcnew String(nativeCalculator->subtract(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2])).c_str());
	}
	else if (inputDelimeter[1] == gcnew String("*")) {
		return gcnew String(nativeCalculator->multiply(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2])).c_str());
	}
	else if (inputDelimeter[1] == gcnew String("/")) {
		return gcnew String(nativeCalculator->divide(Convert::ToDouble(inputDelimeter[0]), Convert::ToDouble(inputDelimeter[2])).c_str());
	}

	String ^result = L""; 
	return result;
}