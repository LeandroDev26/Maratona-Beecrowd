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
                cout<<"0"<< h << ":"<<"0"<< m << " - A porta fechou!"<<endl;
            }
        }
        else if( o == 1)
        {
            cout<< h << ":"<< m << " - A porta abriu!"<<endl;

        }
    }








    return 0;
}
