#pragma once
static class Collatz
{
public:
	Collatz();
	~Collatz();

	int Equation(unsigned long num);

private:
	int _EvenEquation(unsigned long num);
	int _OddEquation(unsigned long num);
} collatz;

