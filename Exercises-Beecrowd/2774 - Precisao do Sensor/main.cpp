#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{


    int h, m ;
    vector<float> lista;
    while(cin>> h >> m)
    {
        int totmin = (h*60);
        int qt = totmin/m;

        for(int i = 0 ; i < qt; i++)
        {
            float xi;
            cin>> xi;
            lista.push_back(xi);

        }

        float media = 0 ;

        for(int j = 0 ; j < qt; j++)
        {
            media += lista[j];

        }

        media = (media/qt);
        float precisao = 0;

        for(int k = 0 ; k < qt; k++){

        }



    }






    return 0;
}
