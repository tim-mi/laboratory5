// lab_5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

double sum(float a, int b)
{
	return a + b;
}

double sub(float a, int b)
{
	return a - b;
}

double pow(float a, long  b)
{
	double res = 1.0;
	for (unsigned int i = 0; i < b; i++)
	{
		res = res * a;
	}
	return res;
}

int main()
	{
		float a;
		int b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "a + b = " << sum(a, b) << endl;
		cout << "a - b = " << sub(a, b) << endl;
		cout << "a^b = " << pow(a, b) << endl;
		system("pause");
		return 0;
	}