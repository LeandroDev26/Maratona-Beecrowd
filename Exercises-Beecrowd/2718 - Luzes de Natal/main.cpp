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
        while(x > 0)
        {
            if(x % 2 == 1)
            {
                atual ++;
                if(atual > maximo)
                {
                    maximo = atual;
                }
                x /= 2;

            }
            else
            {
                atual = 0;
            }
        }

        cout<< maximo<<endl;
    }






    return 0;
}
