#include <iostream>

using namespace std;

int main()
{
    int n, fatorial = 0;

    cin>> n;

    for(int i = 1 ; i <= n ; i++)
    {
        fatorial = n * (n-i);

    }
    cout<< fatorial <<endl;




    return 0;
}
