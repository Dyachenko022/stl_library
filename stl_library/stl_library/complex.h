#pragma once
#include <iostream>
#include <list>

using namespace std;

#ifndef COMPLEXX_H
#define COMPLEX_H

struct complex
{
public:
	int re;
	int im;

	complex()
	{}
	complex(int r, int i)
	{
		re = r;
		im = i;
	}
	~complex()
	{}
};


struct things_with_complex
{
	list<complex*> comp;
	list<complex*>::iterator it_comp;

	void enterComplex(int a, int b);
	void printComplex();
};

#endif