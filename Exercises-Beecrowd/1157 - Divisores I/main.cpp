#include <iostream>

using namespace std;

int main()
{

    int n ;
    cin>> n;
    for(int i = 1; i <= n; i++)
    {

        /*if(i == 1)
        {
            cout<< i <<endl;
        }

        if( i == n)
        {
            cout<< i <<endl;

        }

        */
        if( n % i != 0)
        {
            cout<< i <<endl;
        }
    }






    return 0;
}
