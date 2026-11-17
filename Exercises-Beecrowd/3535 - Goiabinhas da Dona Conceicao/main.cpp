#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> listaGoiabinhas;
    int n, q;  // quantidade de pacotes montados e o numero de perguntas feitas
    int ai;  // N inteiros
    int r, l, soma;   // intervalo da pergunta

    cin>> n >> q;

    for(int i = 0; i < n; i++)
    {
        cin>> ai;
        listaGoiabinhas.push_back(ai);

    }

    for(int k = 0; k < q; k++)
    {
        cin>> l >> r;
        soma = 0;
        for(int j = l-1; j < r; j++)
        {
            soma += listaGoiabinhas[j];
        }
        cout<< soma <<endl;
    }


    return 0;
}
