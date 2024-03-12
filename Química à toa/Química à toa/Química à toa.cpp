#include <iostream>     
#include <locale.h> 
#include <string> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	string formula;
	cin >> formula;
	for (i = 0; i < size(formula); i++)
	{
		if (isupper(formula[i]))
		{
			if (i != 0)
			{
				cout << endl << formula[i];
			}
			else
			{
				cout << formula[i];
			}
			if (isupper(formula[i + 1]))
			{
				cout << " 1";
			}
		}
		if (islower(formula[i]))
		{
			cout << formula[i];
			if (isupper(formula[i + 1]))
			{
				cout << " 1";
			}
		}
		if (isdigit(formula[i]))
		{
			if (isalpha(formula[i - 1]))
			{
				cout << " ";
			}
			cout << formula[i];
		}
		if (formula[i] == '.' && isalpha(formula[i - 1]))
		{
			cout << " 1";
		}
	}
}