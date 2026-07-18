#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n, q ;
    string  ns, qs;
    vector <string> pesquisas;
    int maior = 0, cont = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> ns;
        pesquisas.push_back(ns);


    }
    cin>> q;
    for(int j = 0; j < q; j++)
    {
        cin>> qs;
        for(int k = 0 ; k < qs.length()-1; k++)
        {
            if(qs == pesquisas[k])
            {
                cont++;
                if(maior < pesquisas[k].length())
                {
                    maior = pesquisas[k].length();
                }
            }
        }
    }




    return 0;
}
