#include <iostream>

using namespace std;

int main()
{

    int n, h, m, o;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> h >> m >> o;

        if( h == 0 && m <= 9)
        {
            if( o == 0)
            {
                cout<<"0"<< h<< ":50 - A porta fechou!"<<endl;
            }
        }
    }








    return 0;
}
