#include <iostream>     
#include <locale.h> 
#include <cmath> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, dias, tamanhogrupo;
	float pre�o;
	cin >> pre�o >> dias >> tamanhogrupo;
	pre�o = pre�o / 100;
	pre�o = pre�o - pre�o * 0.25;
	if (pre�o - trunc(pre�o) > 0.50)
	{
		pre�o = trunc(pre�o) + 1;
	}
	else
	{
		pre�o = trunc(pre�o) + 0.50;
	}
	if (dias >= 5 && dias < 8)
	{
		pre�o = pre�o - pre�o * 0.40;
		if (pre�o - trunc(pre�o) > 0.50)
		{
			pre�o = trunc(pre�o) + 1;
		}
		else
		{
			pre�o = trunc(pre�o) + 0.50;
		}
	}
	else if (dias >= 8)
	{
		pre�o = pre�o - pre�o * 0.65;
		if (pre�o - trunc(pre�o) > 0.50)
		{
			pre�o = trunc(pre�o) + 1;
		}
		else
		{
			pre�o = trunc(pre�o) + 0.50;
		}
	}
	if (tamanhogrupo >= 4)
	{
		pre�o = pre�o - pre�o * 0.50;
		if (pre�o - trunc(pre�o) > 0.50)
		{
			pre�o = trunc(pre�o) + 1;
		}
		else
		{
			pre�o = trunc(pre�o) + 0.50;
		}
	}
	cout << pre�o * 100;
}