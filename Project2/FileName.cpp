#include <iostream>
#include <string>
#include <windows.h>
#include "tumanovskii.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	cout << "����� 2 ����� = " << Sum(9, 15) << endl;
	cout << "����� 3 ����� = " << Sum(10, 45, 55) << endl;
	cout << "����� 4 ����� = " << Sum(Sum(1, 4), Sum(5, 3)) << endl;
	cout << Polojitelnoe_chislo(6) << endl;

	int n = -5;
	cin >> n;
	Polojitelnoe_chislo(n);
	for (size_t i = 0; i < Polojitelnoe_chislo(n); i++)
	{
		cout << "Hello \n";
	}
	*/
	cout << "monitor = " << monitor(15, 10) << endl;
	cout << "Vichitanie = " << Vichitanie(66, 20) << endl;
	cout << "Delenie = " << Delenie(25, 5) << endl;
	cout << "Umnojenie = " << Umnojenie(25, 5) << endl;

}