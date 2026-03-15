#include <iostream>

using namespace std;

int main()
{
    int e, pares = 0, impares = 0;
    for(int i = 0; i < 5; i++)
    {
        cin>> e ;


        if ( e % 2 == 0)
        {
            pares++;
        }
    }

    cout<< pares << " valores pares"<<endl;


    return 0;
}
