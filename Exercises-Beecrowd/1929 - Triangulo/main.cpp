#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cin>> a >> b >> c >> d;

    if( a > b )
    {
        int maiorAb = a;

    }
    else
    {
        int maiorAb = b;

    }


        if ( a + b > (d || c))
    {
        cout << "S" << endl;
    }
    else if( a + c > (b || d))
    {
        cout << "S" << endl;

    }
    else if( a + d > (c || d))
    {
        cout << "S" << endl;

    }
    else if( b + c  > (a || d))
    {
        cout << "S" << endl;

    }
    else if( b + d > (a || c))
    {
        cout << "S" << endl;

    }
    else if( c + d > (a || b))
    {
        cout << "S" << endl;

    }
    else
    {
        cout<< "N" <<endl;
    }


    return 0;
}
