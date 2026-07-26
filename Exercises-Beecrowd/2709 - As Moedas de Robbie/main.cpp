#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int m ;
    while(cin>> m)
    {
        int valorMoeda = 0 , n = 0;
        stack<int> pilhaMoedas;
        for(int i = 0; i < m ; i++)
        {
            cin>> valorMoeda;
            pilhaMoedas.push(valorMoeda);
        }
        cin>> n;

        int soma = 0;
        while(!pilhaMoedas.empty()){
            soma += pilhaMoedas.top();
        }

    }





    return 0;
}
