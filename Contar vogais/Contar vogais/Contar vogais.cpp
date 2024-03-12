#include <iostream>     
#include <locale.h> 
#include <string> 
using namespace std;
void main()
{
    setlocale(LC_ALL, "Portuguese");
    string frase;
    int opção, i, A = 0, E = 0, I = 0, O = 0, U = 0;
    do
    {
        cout << "-------- Menu --------\n1 - Contar vogais\n0 - Sair\n";
        cin >> opção;
        switch (opção)
        {
        case(1):
            cout << "Insere uma frase:\n";
            cin.ignore();
            getline(cin, frase);
            for (i = 0; i < frase.size(); i++)
            {
                if (frase[i] == 'a' || frase[i] == 'A')
                {
                    A++;
                }
                else if (frase[i] == 'e' || frase[i] == 'E')
                {
                    E++;
                }
                else if (frase[i] == 'i' || frase[i] == 'I')
                {
                    I++;
                }
                else if (frase[i] == 'o' || frase[i] == 'O')
                {
                    O++;
                }
                else if (frase[i] == 'u' || frase[i] == 'U')
                {
                    U++;
                }
            }
            cout << "Escreveste " << A << " As, " << E << " Es, " << I << " Is, " << O << " Os e " << U << " Us.\n";
        default:
            break;
        }
    } while (opção != 0);
}