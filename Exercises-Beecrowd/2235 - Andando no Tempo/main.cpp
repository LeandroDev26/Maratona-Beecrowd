#include <iostream>

using namespace std;

int main()
{

    int a, b,c ;

    cin>> a >> b >> c;

    if(a+b == 0 || (a + b - c) == 0)
    {
        cout<<"S"<<endl;
    }
    else if(a - b == 0 || ((a - b )+ c) == 0)
    {
        cout<<"S"<<endl;

    }




    return 0;
}
