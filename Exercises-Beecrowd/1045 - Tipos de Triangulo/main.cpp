#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cin>> a >> b >> c;

    //ordenar
    if (b>a)
    {
        double temp = a;
        a = b;
        b = temp;

    }
    if (c>a)
    {
        double temp = a;
        a = c;
        c = temp;
    }

    if(c>b)
    {
        double temp = c;
        c = b;
        b = temp;
    }

    if(a>=(b+c))
    {
        cout<< "NAO FORMA TRIANGULO" <<endl;
    }

    if(pow(a,2) == pow(b,2) + pow(c,2))
    {

        cout<< "TRIANGULO RETANGULO" << endl;
    }

    //teste
    cout<< a << b << c <<endl;






    return 0;
}
