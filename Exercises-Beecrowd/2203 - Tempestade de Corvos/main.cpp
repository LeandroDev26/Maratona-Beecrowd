#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int xf, yf, xi, yi, vi, r1, r2 , D;

    while(cin>> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
    {
          D = (sqrt(pow(xi - xf, 2) + pow(yi - yf , 2) ) );
          D += (vi * 1.5);
    }



    return 0;
}
