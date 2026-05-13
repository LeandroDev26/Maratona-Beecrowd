#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a, b, c;

    while ( a =! 0)
    {
        cin>> a;
        cout<<" ";
        cin>> b;
        cout<<" ";
        cin>> c;
        cout<<endl;

        int area = a * b;
        int areaTotal = (area * 100)/c;
        int areaDolado = sqrt(areaTotal);

        cout<< areaDolado <<endl;
    }







    return 0;
}
