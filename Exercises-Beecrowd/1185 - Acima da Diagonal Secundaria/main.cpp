#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{

    char t;
    double soma = 0;
    int linhas = 12;
    int colunas = 12;
    vector<vector<double>> matriz(linhas, vector<double>(colunas, 0));

    cin>> t;


     for(int i = 0; i < linhas; i++)
    {

        for(int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }




    return 0;
}
