#include <iostream>
#include <map>
using namespace std;

int main()
{
    // g = tot necessario para vencer e n = casos de teste x = a qtd de vezes que recitaram
    map<char, int> runas;
    int n, g, x, ri ;
    char vi, runaRs;
    cin>> n >> g;
    for(int i = 0 ; i < n; i++)
    {
        cin>> vi >> ri;
        runas.insert({vi, ri});
    }
    cin>> x ;
    int total = 0;

    for(int j = 0 ; j < x; j++)
    {
        cin>> runaRs;
        for (auto& par : runas)
        {

            if (par.first == runaRs)
            {
                total +=  runas[par.second];
            }
        }
    }

    if(total >= g)
    {
        cout<< total <<endl;
        cout<< "You shall pass!" <<endl;
    }
    else
    {
        cout<< total <<endl;
        cout<< "My precioooous" <<endl;
    }








    return 0;
}
