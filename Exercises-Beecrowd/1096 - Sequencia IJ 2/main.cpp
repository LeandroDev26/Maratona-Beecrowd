#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7, aux = 0 ,soma = 0;

    for(int i = 1 ; i <=9 ; i++)
    {

        while( j >= 5 && i <= 9)
        {
            soma += i;
            cout<< "I=" << i <<  " J=" <<j <<endl;
            j --;

        }
    }




    return 0;
}
