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
		cout << "Insere um n�mero\n";
		cin >> numero;
		if (numero < aleatorio)
		{
			cout << "O teu n�mero � menor do que o n�mero aleat�rio\n";
		}
		else if (numero > aleatorio)
		{
			cout << "O teu n�mero � maior do que o n�mero aleat�rio\n";
		}
		else
		{
			cout << "Adivinhaste corretamente!! Yippeeeee!!! :3\n";
			break;
		}
	} while (numero != aleatorio);
}