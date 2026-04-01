#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string t;
    int l, soma = 0, media = 0;
    int linhas = 12;
    int colunas = 12;
    vector<vector<double>> matriz(linhas, vector<double>(colunas, 0));

    cin>> l;
    cin>> t;

    // O laço de fora (i) controla os andares (linhas)
    for(int i = 0; i < linhas; i++)
    {

        // O laço de dentro (j) anda pelas gavetas (colunas) daquele andar
        for(int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j]; // Lendo e guardando o valor na coordenada exata
        }
    }

    cout<< fixed << setprecision(1);


    if( t == "S")
    {

        for(int k = 0; k < colunas; k++)
        {
            soma += matriz[l][k];

        }

        cout<< soma <<endl;
    }
    else if( t == "M")
    {

           for(int y = 0; y < colunas; y++)
        {
            soma += matriz[l][y];

        }
    }



    return 0;

}
