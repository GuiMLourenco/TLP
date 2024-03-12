#include <iostream>     
#include <locale.h> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, n = -1, k[1000], m[1000], distancia[1000], kdif[1000], mdif[1000];
	do
	{
		n++;
		cin >> k[n] >> m[n];
		distancia[n] = k[n] * 1000 + m[n];
	} while (distancia[n] > 0);
	for (i = 1; i < n; i++)
	{
		if (distancia[i] == distancia[i - 1])
		{
			cout << "PATAMAR\n";
		}
		else if (distancia[i] > distancia[i - 1])
		{
			kdif[i] = k[i] - k[i - 1];
			if (m[i] >= m[i - 1])
			{
				mdif[i] = m[i] - m[i - 1];
			}
			else
			{
				mdif[i] = 1000 + m[i] - m[i - 1];
				kdif[i]--;
			}
			cout << "ALTO " << kdif[i] << " km " << mdif[i] << " m \n";
		}
		else if (distancia[i] < distancia[i - 1])
		{
			kdif[i] = k[i - 1] - k[i];
			if (m[i - 1] >= m[i])
			{
				mdif[i] = m[i - 1] - m[i];
			}
			else
			{
				mdif[i] = 1000 + m[i - 1] - m[i];
				kdif[i]--;
			}
			cout << "BAIXO " << kdif[i] << " km " << mdif[i] << " m \n";
		}
	}
}