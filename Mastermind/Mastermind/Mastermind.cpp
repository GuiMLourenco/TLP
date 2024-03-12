#include <iostream>       
#include <locale.h>     
#include <time.h> 
#include <string> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j, opção, codigo[5], jogadas[10][5], numscertos = 0, umcodigo = 0, umjogada = 0;
	string nome;
	srand(time(0));
	do
	{
		umcodigo = 0;
		for (i = 0; i < 5; i++)
		{
			codigo[i] = rand() % 2 + 1;
			if (codigo[i] == 1)
			{
				umcodigo++;
			}
		}
		cout << " -- Mastermind --\n1 - Inserir nome do jogador\n2 - Jogar\n0 - Sair\n";
		cin >> opção;
		switch (opção)
		{
		case(1):
			cout << "Qual é o nome do jogador?\n";
			cin >> nome;
			break;
		case(2):
			for (i = 0; i < 10; i++)
			{
				umjogada = 0;
				numscertos = 0;
				cout << i + 1 << "ª tentativa:\n";
				for (j = 0; j < 5; j++)
				{
					do
					{
						cin >> jogadas[i][j];
						if (jogadas[i][j] > 2 || jogadas[i][j] < 1)
						{
							cout << "Apenas 1s e 2s!\n";
						}
					} while (jogadas[i][j] > 2 || jogadas[i][j] < 1);
					if (jogadas[i][j] == 1)
					{
						umjogada++;
					}
					if (jogadas[i][j] == codigo[j])
					{
						numscertos++;
					}
				}
				if (i == 9 && numscertos < 5)
				{
					cout << "Perdeste\n";
					umjogada = 0;
					break;
				}
				if (numscertos < 5)
				{
					cout << "Números no lugar certo: " << numscertos << endl;
				}
				else if (numscertos == 5)
				{
					cout << "Acertaste!!\n";
					umjogada = 0;
					break;
				}
				if (umcodigo >= umjogada)
				{
					cout << "Números certos: " << 5 - (umcodigo - umjogada) << endl;
				}
				else
				{
					cout << "Números certos: " << 5 + (umcodigo - umjogada) << endl;
				}
			}
			break;
		default:
			break;
		}
	} while (opção != 0);
}