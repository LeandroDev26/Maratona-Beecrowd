#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, linhas, colunas;

    while(cin>> n)
    {
        linhas = n;
        colunas = n;
        vector< vector <int>> matriz (linhas, vector<int> (colunas, 0));

        for(int i = 0; i < linhas; i++)
        {

            for(int j = 0; j < colunas; j++)
            {
                if( i + j == n- 1){

                }
              cout<< matriz[i][j];
            }
        }

    }





    return 0;
}
