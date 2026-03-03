#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cin>> a >> b >> c;

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

        cout<< a << b << c <<endl;






    return 0;
}
