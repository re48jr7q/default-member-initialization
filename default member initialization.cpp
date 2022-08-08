#include <iostream>
#include "default member initialization.h"

struct Fraction
{
	int numerator{};
	int denominator{ 1 };
};

int main()
{
	Fraction f1;		//numerator = 0, denominator = default 1

	Fraction f2{};		//numerator = default 0, denominator = default 1

	Fraction f3{ 6 };	//numerator = 6, denominator = default 1

	Fraction f4{ 6, 8 };//numerator = 6, denominator = 8
	
	return 0;
}

