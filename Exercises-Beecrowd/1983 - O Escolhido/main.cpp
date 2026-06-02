#include <iostream>

using namespace std;

int main()
{



    int n, m, maior = 0, matricula = 0;
    double nota;
    cin>> n ;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> m >> nota;

        if(nota >= 8)
        {
            if(maior < nota)
            {
                maior = nota;
                matricula = m;

            }

        }
        else
        {
            cout<< "Minimum note not reached"<<endl;
        }


    }






    return 0;
}
