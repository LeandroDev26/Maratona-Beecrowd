#include <iostream>
using namespace std;

int main()
{


    int n, x;
    string binario;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        int atual = 0, maximo = 0;
        if(x % 2 == 1)
        {
            atual ++;
            if(atual > maximo)
            {
                maximo = atual;
            }

        }


    }






    return 0;
}
