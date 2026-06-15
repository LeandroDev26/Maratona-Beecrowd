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
        for(int k = 0; k < n ; k++)
        {
            int cameras = 0;



            if(cameras >= 2)
            {
                cout<<"S";
            }
            else
            {
                cout<<"U";
            }


        }

        cout<<endl;
    }




    return 0;
}
