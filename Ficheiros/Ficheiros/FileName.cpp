#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{
	string nome;
	ofstream Escrita("nomes.txt");
	cout << "Qual e o seu nome?\n";
	getline(cin, nome);
	Escrita << nome;
	Escrita.close();
	ifstream Leitura("nomes.txt");
	while (getline(Leitura, nome))
	{
		cout << nome;
	}
	Leitura.close();
}