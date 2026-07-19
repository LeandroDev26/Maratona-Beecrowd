#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector <string> joiasDistintas;
    string joias;
    while (cin>> joias)
    {
        int cont = 0;

        if(joiasDistintas.empty())
        {
            joiasDistintas.push_back(joias);
        }
        else
        {
            for(string atual : joiasDistintas)
            {
                if(joias == atual)
                {
                    cont++;
                }
            }

            if(cont == 0)
            {
                joiasDistintas.push_back(joias);

            }

        }

    }
    cout<< joiasDistintas.size()<<endl;



        //outra maneira


    set<string> joiasDistintas;
    string joias;

    while (cin >> joias)
    {
        // Tentamos inserir a joia.
        // Se ela já existir lá dentro, o 'set' simplesmente ignora e não faz nada!
        joiasDistintas.insert(joias);
    }

    // No final, o tamanho do 'set' será exatamente o número de joias únicas
    cout << joiasDistintas.size() << endl;



    return 0;
}
