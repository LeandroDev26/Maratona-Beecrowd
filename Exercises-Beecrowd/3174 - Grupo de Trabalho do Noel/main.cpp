#include <iostream>

using namespace std;

int main()
{

    int n, h, bonecos, arquitetos, musicos, desenhistas, p;
    string e, g ;

    cin>> n ;
    for(int i = 0; i < n ; i++)
    {
        cin>> e >> g >> h;

        if(g == "bonecos")
        {
            bonecos += h;
        }
        else if( g == "arquitetos")
        {
            arquitetos += h;
        }
        else if( g == "musicos")
        {
            musicos += h;
        }
        else if( g == "desenhistas")
        {
            desenhistas += h;
        }
    }


    p += bonecos/8;
    p += arquitetos/4;
    p += musicos/6;
    p += desenhistas/12;
    cout<< p << endl;




    return 0;
}
