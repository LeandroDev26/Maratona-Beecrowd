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
    for(int j = 0; j < n; j++)
    {
        if(j == n-1 || j == 0)
        {
            cout<<"|";
        }
    }

    return 0;
}
