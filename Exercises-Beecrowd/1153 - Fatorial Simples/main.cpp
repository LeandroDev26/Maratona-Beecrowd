#include <iostream>

using namespace std;

int main()
{
    int n, fatorial = 0;

    cin>> n;

    for(int i = 0 ; i <n ; i++)
    {
        fatorial = n*((n-1) * (n-2) * (n-3) );

    }
    cout<< fatorial <<endl;




    return 0;
}
