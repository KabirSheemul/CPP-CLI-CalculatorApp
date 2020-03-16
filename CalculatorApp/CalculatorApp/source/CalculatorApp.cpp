// CalculatorApp.cpp : main project file.

#include "stdafx.h"
#include "CalculatorManager.h"

#define NATIVE 0

using namespace System;

int main(array<System::String ^> ^args)
{
	String ^input;
	CalculatorManager ^calculatorManager = gcnew CalculatorManager();
    Console::WriteLine(L"Enter Input: ");
	input = Console::ReadLine();
	//Console::WriteLine(L"The Result : " + calculatorManager->calculate(input));
	Console::WriteLine(L"The Result : " + calculatorManager->calculateNative(input));
    return 0;
}
