#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string fruta, virus;
    vector<string> listaFrutas;
    vector<string> listaVirus;

    for(int i = 0; i < n ; i++)
    {
        cin >> fruta;

        for (char &c : fruta)
        {
            c = std::tolower(c);
        }
        listaFrutas.push_back(fruta);
    }

    for(int j = 0; j < m ; j++)
    {
        cin >> virus;

        for (char &c : virus)
        {
            c = std::tolower(c);
        }
        listaVirus.push_back(virus);
    }

    for (const string& f : listaFrutas)
    {
        bool achou = false;

        string f_invertida = f;
        reverse(f_invertida.begin(), f_invertida.end());


        for (const string& linha : listaVirus)
        {

            if (linha.find(f) != string::npos || linha.find(f_invertida) != string::npos)
            {
                achou = true;
                break;
            }
        }

        if (achou)
        {
            cout << "Sheldon come a fruta " << f << "\n";
        }
        else
        {
            cout << "Sheldon detesta a fruta " << f << "\n";
        }
    }

    return 0;
}
