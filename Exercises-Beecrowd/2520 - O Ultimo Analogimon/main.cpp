#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, m ;
    // n e o numero de linhas e o m e o numero de colunas
    while(cin>> n >> m)
    {
        vector<vector<int>> matriz(n, vector<int>(m));

        for(int i = 0 ;  i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>> matriz[i][j];
            }
        }
    }






    return 0;
}
