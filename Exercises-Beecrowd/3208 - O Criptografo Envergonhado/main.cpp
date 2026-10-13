#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool divide(string K, int divisor)
{
    int resto = 0;
    for (int i = 0; i < K.length(); i++)
    {
        int digito = K[i] - '0';
        resto = (resto * 10 + digito) % divisor;
    }
    return resto == 0;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int LIMITE = 1000000;
    vector<bool> e_primo(LIMITE + 1, true);
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


    vector<int> primos;
    for (int i = 2; i <= LIMITE; ++i)
    {
        if (e_primo[i])
        {
            primos.push_back(i);
        }
    }

    int l;
    string k;

    while ((cin >> k >> l) && (k != "0" || l != 0))
    {
        bool encontrou_bad = false;

        for (int i = 0; i < primos.size(); i++)
        {
            int p = primos[i];

            if (p >= l)
            {
                break;
            }

            if (divide(k, p))
            {
                cout << "BAD " << p << "\n";
                encontrou_bad = true;
                break;
            }
        }

        if (!encontrou_bad)
        {
            cout << "GOOD\n";
        }
    }

    return 0;
}
