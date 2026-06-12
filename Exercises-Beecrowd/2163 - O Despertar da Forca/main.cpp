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


    for(int k = 0 ; k < n; k++)
    {
        for(int l = 0 ; l < m; l++)
        {
        }

    }





    return 0;
}
