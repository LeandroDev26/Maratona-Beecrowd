#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int e, maior , indice;
    vector<int> numeros;
    for (int i = 0; i < 100; i++)
    {

        cin>> e;
        numeros.push_back(e);

    }
    for (int i = 0; i < numeros.size(); i++)
    {
        if(numeros[i] > numeros[i+1])
        {

            maior = numeros[i];
        }
        else
        {
            maior = numeros[i+1];

        }

    }

    cout<< maior <<endl;
    cout<< indice <<endl;


    return 0;
}
