#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7, aux = 0,soma = 1;

    while( i <= 9)
    {
        j = 7;

        while( j >= 5 )
        {
           soma++;
            cout<< "I=" << i <<  " J=" <<j <<endl;
            j --;


        }

        i = soma;

    }


    return 0;
}
