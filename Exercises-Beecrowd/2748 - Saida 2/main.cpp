#include <iostream>

using namespace std;

int main()
{

    int n = 39;
    for(int i = 0 ; i < n; i++)
    {
        cout<<"-";
    }
    cout<<endl;

    for(int k = 0; k < 5; k++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == n-1 || j == 0)
            {
                cout<<"|";
            }
            if( k == 0 && j == 9)
            {
                cout<<"Roberto"<<endl;
            }
            if( k == 2 && j == 9)
            {
                cout<<"5786"<<endl;
            }
            if( k == 4 && j == 9)
            {
                cout<<"UNIFEI"<<endl;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n; i++)
    {
        cout<<"-";
    }
    cout<<endl;

    return 0;
}
