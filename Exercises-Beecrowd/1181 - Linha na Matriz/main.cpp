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

    for(int i = 0; i < linhas; i++)
    {

        for(int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j];
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

        media = (soma/colunas);
        cout<< media <<endl;
    }



    return 0;

}
