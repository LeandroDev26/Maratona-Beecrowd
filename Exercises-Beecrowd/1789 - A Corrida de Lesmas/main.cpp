#include <iostream>

using namespace std;

int main()
{


    int t, l;
    while(cin>> t)
    {
        for(int i = 0 ; i < t; i++)
        {
            cin>> l;

            if( l < 10)
            {
                cout<<"1"<<endl;
            }
            else if(l >= 10 && l < 20)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<< "3"<<endl;
            }

        }


    }







    return 0;
}
