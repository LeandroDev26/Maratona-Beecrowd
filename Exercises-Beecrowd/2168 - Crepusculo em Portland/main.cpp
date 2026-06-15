#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n ;
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
        int cameras = 0;
        for(int k = 0; k < n ; k++)
        {
            if(matriz[l][k] == 1)
            {
                cameras++;
            }
            else   if(matriz[l][k+1] == 1)
            {
                cameras++;
            }
            else   if(matriz[l+1][k] == 1)
            {
                cameras++;
            }
            else   if(matriz[l+1][k+1] == 1)
            {
                cameras++;
            }
        }
        if(cameras >= 2)
        {
            cout<<"S";
        }
        else
        {
            cout<<"U";
        }

        cout<<endl;
    }




    return 0;
}
