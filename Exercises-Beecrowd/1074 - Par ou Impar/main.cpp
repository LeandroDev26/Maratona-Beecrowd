#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin>> n;
    for (int i = 0; i < n; i++)
    {

        cin>> x;
        if (x == 0)
        {
            cout<<"NULL"<<endl;
        }

        if( x % 2 == 0 && x > 0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        else
        {
            cout<<"ODD NEGATIVE"<<endl;
        }

         if( x % 2 == 0 && x < 0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
    }


    return 0;
}
