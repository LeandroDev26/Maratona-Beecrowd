#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m, l, x, y, cm, cl, a;
    while(cin>> n)
    {
        cin>> m >> l;
        vector<vector<int>> matrizM(n, vector<int>(m));
        vector<vector<int>> matrizL(n, vector<int>(l));


        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0; j < n ; j++ )
            {
               cin>> matrizM[i][j];
            }
        }
        for(int k = 0 ; k < l; k++)
        {
            for(int x = 0; x < n ; x++ )
            {
                 cin>>matrizL[k][x];
            }
        }

        cin>> cm >> cl;
        cin>> a;

        if(matrizM[cm][a] == matrizL[cl][a])
        {
            cout<<"Empate"<<endl;

        }
        else if(matrizM[cm][a] > matrizL[cl][a])
        {
            cout<<"Marcos"<<endl;
        }
        else
        {
            cout<<"Leonardo"<<endl;

        }
    }



    return 0;
}
