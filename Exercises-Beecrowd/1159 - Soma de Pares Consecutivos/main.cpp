#include <iostream>

using namespace std;

int main()
{
    int x = 0, soma = 0, cont = 0;
    cin>> x;

    while( x != 0)
    {

      soma = 0, cont = 0;
        if( x % 2 == 0)
        {
            while(cont < 5)
            {
                soma += x;
                x+=2;
                cont++;
            }

        }else
        {


        }

        cout<< soma <<endl;


        cin>> x;


    }



    return 0;
}
