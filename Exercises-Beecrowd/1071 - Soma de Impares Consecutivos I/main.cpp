#include <iostream>

using namespace std;

int main()
{
    int x, y, ini, fim, impares =  0;

    cin>> x >> y ;

    if( x > y)
    {

        ini = y;
        fim = x;
    }else
     {

    ini = x;
    fim = y;
     }

    ini + 1;
    for( ini; ini < fim; ini++)
    {
        if(ini % fim!= 0)
        {
            impares += ini;
        }
    }

    cout<<impares<<endl;




    return 0;
}
