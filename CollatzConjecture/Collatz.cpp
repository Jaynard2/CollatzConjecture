#include "Collatz.h"

Collatz::Collatz()
{
}


Collatz::~Collatz()
{
}

int Collatz::Equation(unsigned long num)
{
	if (num % 2 == 0)
		return _EvenEquation(num);

	return _OddEquation(num);
}

int Collatz::_EvenEquation(unsigned long num)
{
	return num / 2;
}

int Collatz::_OddEquation(unsigned long num)
{
	return 3 * num + 1;
}
