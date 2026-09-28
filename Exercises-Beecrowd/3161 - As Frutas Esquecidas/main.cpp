#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

int main()
{

    int n, m;
    cin>> n >> m;

    string fruta, virus;
    vector<string> listaFrutas;
    vector<string> listaVirus

    for(int i = 0; i < n ; i++)
    {
        cin>> fruta;

        for (char &c : fruta)
        {
            c = std::tolower(c);
        }
        listaFrutas.push_back(fruta);
    }

    for(int j = 0; j < m ; j++)
    {
        cin>> virus;

        for (char &c : virus)
        {
            c = std::tolower(c);
        }
        listaVirus.push_back(fruta);
    }







    return 0;
}
