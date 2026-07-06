#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int c, n;
    string linha1, linha2, frase;
    map<char, char> dicionario;


    while (cin >> c >> n)
    {

        cin.ignore();


        getline(cin, linha1);
        getline(cin, linha2);

        for (int i = 0; i < c; i++)
        {
            char char1 = tolower(linha1[i]);
            char char2 = tolower(linha2[i]);

            dicionario[char1] = char2; // Z minúsculo aponta para P minúsculo
            dicionario[char2] = char1; // P minúsculo aponta para Z minúsculo
        }

        for(int i = 0; i < n; i++)
        {
            getline(cin, frase);

            for(int k = 0; k < frase.length() - 1; k++){


            }
                // AQUI ENTRA A LÓGICA DE DECIFRAR E IMPRIMIR
                // Você vai fazer um for para percorrer a string 'frase',
                // checar no dicionario e imprimir a letra certa.

                cout << endl; // Quebra de linha após imprimir a frase decifrada
        }

        cout << endl;


        dicionario.clear();
    }

    return 0;
}
