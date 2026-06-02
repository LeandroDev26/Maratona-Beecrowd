#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int posicaoAtual = 0, posicaoMax = 0;
    long long n, x, somaArray = 0, brothercrazy = 0;
    vector<long long> qt;
    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        qt.push_back(x);
    }

    while(posicaoAtual >= 0 && posicaoAtual < qt.size() )
    {

        if(posicaoAtual > posicaoMax)
        {
            posicaoMax = posicaoAtual;
        }

        if( qt[posicaoAtual] % 2 == 0)
        {
            //par
        }
        else
        {
            //impar
        }

        if(qt[posicaoAtual] > 0)
        {
            qt[posicaoAtual] --;
        }
    }




    return 0;
}
