#include <iostream>

using namespace std;

int main()
{
    int v, n, totplacas;
    cin>> v >> n;
    totplacas = v * n;

    for(int i = 10 ; i <= 90; i+=10)
    {
        int atualPorc = totplacas * (i /100);
        if( i < 90)
        {
            cout<< atualPorc + 1 << " " ;

        }
        else
        {
            cout<< atualPorc + 1 <<endl;
        }
    }

    return 0;
}
