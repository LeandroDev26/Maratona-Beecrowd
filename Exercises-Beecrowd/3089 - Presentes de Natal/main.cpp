#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;

    while (cin>> n && n != 0)
    {
        vector <int> listaDeValores;
        int maior_valor = 0, menor_valor = 2000000000;

        for(int i = 0 ; i < n*2; i++)
        {
            cin>> x ;
            listaDeValores.push_back(x);
        }


        for(int j = 0 ; j < n ; j++)
        {
            int atual = listaDeValores[j] + listaDeValores[(2 * n - 1) - j];
            if(atual > maior_valor)
            {
                maior_valor = atual;
            }

            if(atual < menor_valor)
            {
                menor_valor = atual;
            }
        }

        cout<< maior_valor << " " << menor_valor <<endl;

    }






    return 0;
}
