#include <iostream>
#include <vector>
using namespace std;

int main()
{


    int n, ai;
    vector<int> lista;
    cin>> n;

    for(int i = 0 ; i < n; i++)
    {
        cin>> ai;
        lista.push_back(ai);
    }
    int maior = lista[0];

    for(int j = 1; j < n; j++)
    {
        if(maior < lista[j])
        {
            maior = lista[j];
        }
    }









    return 0;
}
