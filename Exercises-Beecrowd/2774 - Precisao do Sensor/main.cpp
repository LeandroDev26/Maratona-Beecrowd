#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{


    int h, m ;

    while(cin>> h >> m)
    {
        vector<float> lista;
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

        for(int k = 0 ; k < qt; k++)
        {

            precisao = (lista[k] - media);
            precisao = (precisao*precisao);

        }

        precisao /= (qt -1);
        float result = sqrt(precisao);

        cout<< fixed << setprecision(5)<< result <<endl;



    }






    return 0;
}
