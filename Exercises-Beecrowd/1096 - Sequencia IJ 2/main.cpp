#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7, aux = 0,soma = 0;

    while( i <= 9)
    {


        while( j >= 5 )
        {
            soma += i;
            cout<< "I=" << i <<  " J=" <<j <<endl;
            j --;


        }

    }


    return 0;
}
