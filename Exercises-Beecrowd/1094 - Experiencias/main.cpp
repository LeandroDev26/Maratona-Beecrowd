#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string tipo;
    int n, cobaias, totco = 0;
    vector<int> numeros;
    vector<string> simbolos;
    cin>> n;

    for( int i = 0; i < n ; i++)
    {
        cin>> cobaias >> tipo ;
        numeros.push_back(cobaias);

    }

    for(int i = 0; i < numeros.size(); i++)
    {
        totco += numeros[i];
    }

    cout<<"Total: "<< totco << " cobaias"<<endl;
    return 0;
}
