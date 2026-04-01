#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int linhas = 12;
    int colunas = 12;
    vector<vector<int>> matriz(linhas, vector<int>(colunas, 0));


    // O laço de fora (i) controla os andares (linhas)
    for(int i = 0; i < linhas; i++)
    {

        // O laço de dentro (j) anda pelas gavetas (colunas) daquele andar
        for(int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j]; // Lendo e guardando o valor na coordenada exata
        }
    }














    return 0;
}
