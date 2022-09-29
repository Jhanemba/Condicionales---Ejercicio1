/*
Escriba un programa que lea dos números y determine cuál de ellos es el mayor
*/

#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Intruduzca el primer numero: "; cin >> a;
	cout << "Introduzca el segundo numero: "; cin >> b;

	if (a > b)
	{
		cout << "El numero mayor es: " << a;
	}
	else
	{
		cout << "El numero mayor es: " << b;
	}

	return 0;
}
