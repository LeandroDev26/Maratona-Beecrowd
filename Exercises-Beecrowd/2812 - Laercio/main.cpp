#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m, mi;

    while(cin>> n)
    {
        vector <int> lista;

        cin>> m;

        for(int i = 0 ; i < m ; i++)
        {
            cin>> mi;
            if(mi %2 == 1)
            {
                lista.push_back(mi);

            }
        }

        sort(lista.begin(), lista.end());
        vector <int> listaOrganizada;

        int ini = 0, fim = m;
        while (ini == fim)
        {




        }





    }


    return 0;
}
