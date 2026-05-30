#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d, maiorAb, maiorCd;

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


        if( c > d )
        {
            maiorCd = c;

        }
        else
        {
            maiorCd = d;

        }

        */


    if ( (a + b > c) && (a + b > d))
    {
        cout << "S" << endl;
    }
    else if( (a + c > b )&& (a + c > d))
    {
        cout << "S" << endl;

    }
    else if( (a + d > c) && (a + d > b ))
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
    else if( c + d > (a && b))
    {
        cout << "S" << endl;

    }
    else
    {
        cout<< "N" <<endl;
    }


    return 0;
}
