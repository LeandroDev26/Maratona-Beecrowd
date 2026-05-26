#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, distanciaAb = 0, distanciaBc = 0;

    cin>> a >> b >> c;

     distanciaAb = (a - b);
     distanciaBc = ( b - c);
    if(a > b && c >= b)
    {
        cout<<":)"<<endl;
    }
    else if(a < b && c <= b )
    {
        cout<<":("<<endl;
    }
    else  if(a < b && c > b)
    {
        cout<<":)"<<endl;
    }



    return 0;
}
