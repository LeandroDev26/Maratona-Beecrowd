#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int m ;
    while(cin>> m)
    {
        int valorMoeda = 0, n = 0;
        stack<int> pilhaMoedas;
        for(int i = 0; i < m ; i++)
        {
            cin>> valorMoeda;
            pilhaMoedas.push(valorMoeda);
        }
        cin>> n;

        int soma = 0;
        while(!pilhaMoedas.empty())
        {
            soma += pilhaMoedas.top();
            for(int j = 0; j < n ; j++)
            {
                if(!pilhaMoedas.empty())
                {
                    pilhaMoedas.pop();
                }
            }

        }
        int naoehprimo = 0;

        for(int k = 2 ; k <=soma; k++)
        {

            if(soma % k == 0)
            {
                naoehprimo++;
            }
        }

        if(naoehprimo > 0 )
        {
            cout<<"You’re a coastal aircraft, Robbie, a large silver aircraft."<<endl;
        }
        else
        {
            cout<<"Bad boy! I’ll hit you."<<endl;
        }


    }

    return 0;
}
