#include <iostream>

using namespace std;

int main()
{

    int c, n;
    cin>> c;

    for(int i = 0 ; i < c ; i++)
    {
        cin>> n;

        if( n % 2 == 1)
        {
            cout<< 1;
        }
        else
        {
            cout<< 0;
        }
    }

    return 0;
}
