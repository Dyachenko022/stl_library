#include "pch.h"
#include "complex.h"

void things_with_complex::enterComplex(int a, int b)
{
	complex* newcompl = new complex(a, b);
	comp.push_back(newcompl);
}

void things_with_complex::printComplex()
{
	for (it_comp = comp.begin(); it_comp != comp.end(); it_comp++)
	{
		cout << (*it_comp)->re <<  " " << (*it_comp)->im << "i" << endl;
	}
}