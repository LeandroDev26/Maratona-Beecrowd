#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n ;
    cin>> n ;

    vector<vector<int>> matriz (n, vector<int> (n));

    for(int i = 0 ; i < n; i++)
    {


        for(int j = 0 ; j < n ; j++)
        {
            cin>> matriz[i][j];
        }
    }

    vector<vector<int>> prefixos(n, vector<int>(n, 0));


    for(int i = 0; i < n; i++)
    {
        prefixos[i][0] = matriz[i][0];

        for(int j = 1; j < n; j++)
        {
            prefixos[i][j] = prefixos[i][j-1] + matriz[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int j = 0; j < n; j++)
    {
        dp[0][j] = matriz[0][j];
    }


    for(int i = 0 ; i < n; i++)
    {


        for(int j = 0 ; j < n ; j++)
        {

        }
        cout<<endl;
    }









    return 0;
}
