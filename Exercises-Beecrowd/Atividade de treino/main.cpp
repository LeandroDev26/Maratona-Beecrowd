#include <iostream>
#include <array>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    array<int,9> estado = {1,2,3,4,0,6,7,5,8}; // 0 é o vazio

    // encontrar a posição do 0
    int pos = -1;
    for (int i = 0; i < 9; i++)
    {
        if (estado[i] == 0)
        {
            pos = i;
            break;
        }
    }

    int linha = pos / 3;
    int coluna = pos % 3;

    cout << "Zero esta na posicao " << pos
         << " (linha " << linha << ", coluna " << coluna << ")\n";

    vector<array<int,9>> sucessores;
    if(linha > 0)
    {
        int cima = linha - 1;
    }
    if(linha <= 2)
    {
        int baixo = linha + 1;
    }

}
