#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> terreno =
    {
        {11, 12, 7, 7, 7, 13, 14},
        {15, 6, 7, 42, 7, 7, 42},
        {98, -5, 7, 7, 7, 42, 7},
        {-1, 42, 3, 9, 7, 7, 7}
    };
    int n, m;

    cin>> n >> m;

    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < m; j++)
        {

            if( j == m )
            {
                cout<<terreno[i][j];

            }

            cout<< terreno[i][j] <<" ";


        }
        cout<<endl;
    }


    for(int l = 1 ; l < n - 1; l++)
    {
        for(int k = 1 ; k < m - 1; k++)
        {
            if(terreno[l][k] == 42)
            {

            }
        }

    }





    return 0;
}
