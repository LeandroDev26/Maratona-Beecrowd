#include <iostream>

using namespace std;

int main()
{
    int meses[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
    int m, d, soma = 0;

    for(int i = 0 ; i < 12; i++)
    {
        soma += meses[i];
    }

    if( m == 12 && d == 25)
    {
        cout<<"E natal!"<<endl;
    }
    else if( m == 12 && d == 24)
    {
        cout<<"E vespera de natal!"<<endl;
    }
    else if ( m == 12 && d > 25)
    {
        cout<<"Ja passou!"<<endl;

    }


    /*while( cin>> m >> d)
    {

    }

    */



    return 0;
}
