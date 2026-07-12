#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m ;

    while(cin>> n >> m)
    {
        vector<vector<int>> matriz(n, vector<int>(m));

        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
               cin>> matriz[i][j];
            }
        }

    }






    return 0;
}
