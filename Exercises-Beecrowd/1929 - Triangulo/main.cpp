#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d, maiorAb, maiorCd , maiorBc;

    cin>> a >> b >> c >> d;
    /*
        if( a > b )
        {
            maiorAb = a;

        }
        else
        {
            maiorAb = b;

        }

        if( b > c )
        {
            maiorBc = b;

        }
        else
        {
            maiorBc = c;

        }


        if( c > d )
        {
            maiorCd = c;

        }
        else
        {
            maiorCd = d;

        }

        */


    if (a + b > maiorCd)
    {
        cout << "S" << endl;
    }
    else if( a + c > maiorBd)
    {
        cout << "S" << endl;

    }
    else if( a + d > maiorBc)
    {
        cout << "S" << endl;

    }
    else if( (b + c  > a) && (b + c > d))
    {
        cout << "S" << endl;

    }
    else if( (b + d > a) && (b + d > c))
    {
        cout << "S" << endl;

    }
    else if( (c + d > a) && (c + d > b))
    {
        cout << "S" << endl;

    }
    else
    {
        cout<< "N" <<endl;
    }


    return 0;
}
