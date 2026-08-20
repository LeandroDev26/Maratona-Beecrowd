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

    for(int j = 0 ; j < n ; j++)
    {
        if(n > 2)
        {
            contador++;
            diferencaAtual = numeros[j] - numeros[j+1];
        }


    }





    return 0;
}
