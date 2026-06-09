#include <iostream>

using namespace std;

int main()
{

    int n, m, qtd, troco = 0 ;

    while(cin>> n >> m && n != 0 && m != 0)
    {
        // As notas disponíveis são: 2, 5, 10, 20, 50 e 100.

        qtd = 0;
        troco = ( n - m);
        while( troco >= 0 )
        {
            if(troco % 100 > 0)
            {
                troco -= 100;
                qtd++;
            }
            else if(troco % 50 > 0)
            {
                troco -= 50;
                qtd++;

            }else if(troco % 20 > 0)
            {
                troco -= 20;
                qtd++;

            }else if(troco % 10 > 0)
            {
                troco -= 10;
                qtd++;

            }else if(troco % 5 > 0)
            {
                troco -= 5;
                qtd++;

            }else if(troco % 2 > 0)
            {
                troco -= 2;
                qtd++;

            }
        }



    }





    return 0;
}
