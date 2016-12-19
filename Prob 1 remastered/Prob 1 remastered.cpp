// Prob 1 remastered.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int st = 1, dr = 1, suma = 1, X;
	bool cauta;
	cin >> X;
	for (st = 1, dr = 1, cauta = false; !cauta && dr <= X;)
	{
		if (suma == X) cauta = !cauta;
		else if (suma > X) suma -= st, st++;
		else suma += ++dr;
	}

	cout << st << " " << dr;
    return 0;
}

