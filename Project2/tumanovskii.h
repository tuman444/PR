#pragma once
#include <iostream>
#include <string>

using namespace std;



int Sum(int a, int b)
{
	return a + b;
}

int Sum(int a, int b, int c)
{
	return a + b + c;

}

int Sum(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int Polojitelnoe_chislo(int a)
{
	if (a > 0)
	{
		return a;
	}
	else
	{
		return a + (-1);
	}
}
int monitor(int a, int b)
{
	if (a > 0 and a < 1920 and b > 0 and b < 1080)
	{
		return a;
		return b;
	}
	else
	{
		return 0;
	}
}
int Vichitanie(int a, int b)
{
	return a - b;
}
int Delenie(int a, int b)
{
	return a / b;
}
int Umnojenie(int a, int b)
{
	return a * b;
}