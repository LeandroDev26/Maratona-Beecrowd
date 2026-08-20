#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long n, x;
    vector<long long> numeros;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        numeros.push_back(x);

    }
    int contador = 0;
    int diferencaAtual;
    int novaDiferenca;


    if(n > 2)
    {
        contador++;
        diferencaAtual = numeros[0] - numeros[1];


    }
    else
    {

        for(int j = 2 ; j < n ; j++)
        {




        }


    }





    return 0;
}
