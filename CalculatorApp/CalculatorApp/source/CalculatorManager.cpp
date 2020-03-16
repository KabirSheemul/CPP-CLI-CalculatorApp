#include "stdafx.h"
#include "CalculatorManager.h"

using namespace System;

CalculatorManager::CalculatorManager() {
	calculator = gcnew CalculatorWrap();
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