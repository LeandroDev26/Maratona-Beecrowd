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
    int flag = 1;
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

                if( terreno[l-1][k] == 7)
                {
                    ///cima
                    flag++;

                }
                else if( terreno[l-1][k - 1] == 7)
                {
                    //cima + esquerda
                    flag++;


                }else if( terreno[l-1][k + 1] == 7)
                {
                    //cima + direita
                    flag++;
                }


                else if( terreno[l+1][k] == 7)
                {
                    //baixo
                    flag++;


                }  else if( terreno[l+1][k-1] == 7)
                {
                    //baixo + esquerda
                    flag++;


                }  else if( terreno[l+1][k-1] == 7)
                {
                    //baixo + direita
                    flag++;


                }
                else if( terreno[l][k -1] == 7)
                {
                    //antes
                    flag++;


                }
                else if( terreno[l][k+1] == 7)
                {
                    //depois
                    flag++;


                }


            }
        }

    }
    if(flag == true)
    {

    }
    else
    {
        cout<< "0 0"<<endl;
    }





    return 0;
}
