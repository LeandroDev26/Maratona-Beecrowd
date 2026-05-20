#include <iostream>

using namespace std;

int main()
{


    int n, t, menor = 100, posicao = 0;
    cin>> n ;

    for (int i = 0 ; i < n ; i++)
    {
        cin>> t;

        if(t < menor)
        {
            menor = t ;
            posicao = i + 1;
        }

    }

    cout<< posicao <<endl;


    return 0;
}
