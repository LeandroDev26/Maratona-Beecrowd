#include <iostream>
#include <string>
#include <vector>
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



    return 0;
}
