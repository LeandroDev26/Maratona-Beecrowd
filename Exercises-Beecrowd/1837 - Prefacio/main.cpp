#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b ;

    cin>> a >> b;
    int r = a % b;

    if( r >= 0)
    {
        cout<< r;

    }
    else
    {
        r = r + abs(b);
        cout<< r;
    }




    return 0;
}
