#include <iostream>

using namespace std;

int main()
{

    int n, k, ki;
    cin>> n ;

    for(int i = 0 ; i < n ; i++)
    {
        int result = 0, soma = 0;
        cin>> k ;
        for(int i = 0; i < k ; i++)
        {
            cin>> ki;
            soma += ki;
        }
        result = soma/k-1;
        cout<< result <<endl;

    }
















    return 0;
}
