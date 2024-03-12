#include <iostream>     
#include <locale.h> 
#include <cmath> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, dias, tamanhogrupo;
	float preço;
	cin >> preço >> dias >> tamanhogrupo;
	preço = preço / 100;
	preço = preço - preço * 0.25;
	if (preço - trunc(preço) > 0.50)
	{
		preço = trunc(preço) + 1;
	}
	else
	{
		preço = trunc(preço) + 0.50;
	}
	if (dias >= 5 && dias < 8)
	{
		preço = preço - preço * 0.40;
		if (preço - trunc(preço) > 0.50)
		{
			preço = trunc(preço) + 1;
		}
		else
		{
			preço = trunc(preço) + 0.50;
		}
	}
	else if (dias >= 8)
	{
		preço = preço - preço * 0.65;
		if (preço - trunc(preço) > 0.50)
		{
			preço = trunc(preço) + 1;
		}
		else
		{
			preço = trunc(preço) + 0.50;
		}
	}
	if (tamanhogrupo >= 4)
	{
		preço = preço - preço * 0.50;
		if (preço - trunc(preço) > 0.50)
		{
			preço = trunc(preço) + 1;
		}
		else
		{
			preço = trunc(preço) + 0.50;
		}
	}
	cout << preço * 100;
}