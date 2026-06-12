#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int n, h ;
    bool padrao_valido = true;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> h;
        numeros.push_back(h);

    }

    if(n = 2 && numeros[0] == numeros[1])
    {
        padrao_valido = false;
    }

   for(int j = 2; j < numeros.size(); j++){

   }



    return 0;
}
