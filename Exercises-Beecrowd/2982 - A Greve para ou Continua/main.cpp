#include <iostream>

using namespace std;

int main()
{
    int n, c, gastos = 0, verba = 0;
    char t;

    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> t >> c;

        if(t == 'V')
        {
            verba += c;
        }
        else
        {
            gastos += c;
        }

    }

    if(verba >= gastos)
    {
        cout<< "A greve vai parar."<<endl;
    }
    else
    {
         cout<< "NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    }









    return 0;
}
