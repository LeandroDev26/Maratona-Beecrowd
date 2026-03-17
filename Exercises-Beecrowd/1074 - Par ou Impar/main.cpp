#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    vector<int> numeros;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        numeros.push_back(x);
    }


    for (int i = 0; i < n; i++)
    {

        int valor_atual = numeros[i];


        if (valor_atual == 0)
        {
            cout << "NULL" << endl;
        }
        else if(valor_atual % 2 == 0 && valor_atual > 0)
            cout << "EVEN POSITIVE" << endl;
        }
          else if(x % 2 != 0 && x < 0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }



     return 0;

    }


