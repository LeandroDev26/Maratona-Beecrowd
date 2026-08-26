#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n ;
    cin>> n;

    if(n == 1)
    {
        cout<< 1 <<endl;
    }
    else
    {
        int valor = pow(2,n-1);
        cout<< valor <<endl;

    }

    return 0;
}
