#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string tipo;
    int n, cobaias, totcob = 0,totc = 0, totr = 0, tots = 0;
    vector<int> numeros;
    vector<string> simbolos;
    cin>> n;

    for( int i = 0; i < n ; i++)
    {
        cin>> cobaias >> tipo ;
        numeros.push_back(cobaias);
        simbolos.push_back(tipo);

    }

    for(int i = 0; i < numeros.size(); i++)
    {
        totcob += numeros[i];

        if(simbolos[i] == "C")
        {
           totc += numeros[i];
        }

        else if(simbolos[i] == "S")
        {
            tots += numeros[i];
        }

        else if(simbolos[i] == "R")
        {
               totr += numeros[i];
        }
    }

    cout<<"Total: "<< totcob << " cobaias"<<endl;
    return 0;
}
