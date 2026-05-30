#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cin>> a >> b >> c >> d;

    if ( a + b > c && a + c > b && b + c > a)
    {
        cout<<"S" <<endl;
    }
    else  if ( a + b > d && a + d > c && d + c > a)
    {
        cout<<"S" <<endl;
    } else  if ( a + c > d && a + d > c && d + c > a)
    {
        cout<<"S" <<endl;
    } else  if ( b + c > d && b + d > c && d + c > b)
    {
        cout<<"S" <<endl;
    }
    return 0;
}
