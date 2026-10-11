#include <iostream>

using namespace std;

int main()
{

    int n, k, ki;
    cin>> n ;

    for(int i = 0 ; i < n ; i++)
    {
        int result = 0, soma = 0 ;
        cin>> k ;
        for(int j = 0; j < k ; j++)
        {
            cin>> ki;
            soma += ki;
        }
        int totUsa = k -1;
        result = (soma - totUsa);
        cout<< result <<endl;

    }
    return 0;
}
