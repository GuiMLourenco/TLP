#include <iostream>   
#include <locale.h>   
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int aleatorio = rand(), numero;
	do
	{
		cout << "Insere um número\n";
		cin >> numero;
		if (numero < aleatorio)
		{
			cout << "O teu número é menor do que o número aleatório\n";
		}
		else if (numero > aleatorio)
		{
			cout << "O teu número é maior do que o número aleatório\n";
		}
		else
		{
			cout << "Adivinhaste corretamente!! Yippeeeee!!! :3\n";
			break;
		}
	} while (numero != aleatorio);
}