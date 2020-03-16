#pragma once
#ifdef CALCULATORLIB_EXPORTS
#define CALCULATORLIB_API __declspec(dllexport)
#else
#define CALCULATORLIB_API __declspec(dllimport)
#endif
