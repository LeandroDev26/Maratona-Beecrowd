#include <iostream>

using namespace std;

int main()
{

    int n, m, qtd, troco = 0 ;
    int notas [6] = { 2, 5, 10, 20, 50, 100};
    while(cin>> n >> m && n != 0 && m != 0)
    {
        // As notas disponíveis são: 2, 5, 10, 20, 50 e 100.

        qtd = 1;
        troco = ( m - n);


        for(int i = 0 ; i < 6; i++)
        {

            for(int j = 0 ; j < 6 ; j++)
            {

            }
        }

        if(qtd == 2)
        {
            cout<< "possible"<<endl;
        }
        else
        {
            cout<< "impossible"<<endl;

        }

    }





    return 0;
}
