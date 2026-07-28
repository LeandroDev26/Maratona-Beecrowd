#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    long long n, x;
    vector<long long> listaDeTrabalhos;
    while(cin>> n )
    {
        long long  soma = 0, rangel = 0, gugu = 0;
        for(int i = 0; i < n; i++)
        {
            cin>> x;
            soma += x;

        }
        gugu = soma;
        long long diferenca = 100000000000000000000000000000000000000000000, novaDiferenca;
        for(int j = 0 ; j < listaDeTrabalhos.size(); j++)
        {

            rangel += listaDeTrabalhos[j];
            gugu -= listaDeTrabalhos[j];
            novaDiferenca = abs(rangel - gugu);

            if(novaDiferenca < diferenca)
            {
                diferenca = novaDiferenca;
            }
        }

        cout<<diferenca<<endl;
        cout<<endl;

    }






    return 0;
}
