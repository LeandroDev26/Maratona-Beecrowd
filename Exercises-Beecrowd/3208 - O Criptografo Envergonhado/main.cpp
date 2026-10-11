#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    const int LIMITE = 1000000;


    std::vector<bool> e_primo(LIMITE + 1, true);

    e_primo[0] = e_primo[1] = false;


    int raiz = sqrt(LIMITE);

    for (int p = 2; p <= raiz; ++p)
    {

        if (e_primo[p])
        {

            for (int i = p * p; i <= LIMITE; i += p)
            {
                e_primo[i] = false;
            }
        }
    }

    int total_primos = 0;
    for (int i = 2; i <= LIMITE; ++i)
    {
        if (e_primo[i])
        {
            total_primos++;
        }
    }

    int l;
    string k;
    while((cin>> k >> l) && (k == "0" && l == 0) )
    {

    }






    return 0;
}
