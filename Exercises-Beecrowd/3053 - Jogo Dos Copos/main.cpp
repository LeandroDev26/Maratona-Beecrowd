#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int n, movimento;
    char inicio, posicaoAtual;
    cin>> n >> inicio;
    posicaoAtual = inicio;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> movimento;

        if(movimento == 1)
        {
            if(posicaoAtual == 'A')
            {
                posicaoAtual = 'B';
            }
            else
            {
                posicaoAtual = 'A';
            }
        }

    }








    return 0;
}
