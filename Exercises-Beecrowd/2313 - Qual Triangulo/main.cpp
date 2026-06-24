#include <iostream>

using namespace std;

int main()
{

    int a, b, c ;
    cin>> a >> b >> c;

    if ( a + b > c || a + c > b || b + c > a )
    {
        if(a == b && b == c)
        {
            cout<<"Valido-Equilatero"<<endl;
        }
        else if( a == b || a == c || b == c)
        {
            cout<<"Valido-Isoceles"<<endl;
        }
        else
        {
            cout<<"Valido-Escaleno"<<endl;
        }


        if(a == (b+c))
        {
            cout<<"Retangulo: S"<<endl;
        }
        else   if( b == (a+c))
        {
            cout<<"Retangulo: S"<<endl;
        }
    }
    else
    {
        cout<<"Invalido"<<endl;
    }




    return 0;
}
