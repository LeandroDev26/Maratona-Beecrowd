#include <iostream>

using namespace std;

int main()
{
    int n, fatorial = 0;

    cin>> n;

    for(int i = 1 ; i <= n ; i++)
    {
        for( n ; n >= 1; n--)
        {
            fatorial += n * (n-i);

        }
    }



    cout<< fatorial <<endl;



    return 0;
}
