#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n , cameras = 0;
    cin>> n ;
    vector< vector <int>> matriz( n+1, vector<int>(n+1, 0));
    for(int i = 0; i <= n ; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            cin>> matriz[i][j];
        }
    }

    for(int l = 0 ; l < n; l++)
    {
        for(int k = 0; k < n ; k++)
        {

        }

        cout<<endl;
    }




    return 0;
}
