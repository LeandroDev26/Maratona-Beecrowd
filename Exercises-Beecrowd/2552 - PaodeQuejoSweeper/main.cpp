#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m ;

    while(cin>> n >> m)
    {
        vector<vector<int>> matriz(n, vector<int>(m));
        int cont = 0;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>> matriz[i][j];
            }
        }

        for(int l = 0 ; l < n; l++)
        {
            for(int k = 0 ; k < m ; k++)
            {

                if(matriz[l][k] == 1 )
                {
                    cout<< 9 ;
                }
                else
                {
                    if(l > 0 && (matriz[l - 1][k] == 1))
                    {
                        cont++;
                    }
                }
                cout<<endl;
            }

        }


        return 0;
    }
}
