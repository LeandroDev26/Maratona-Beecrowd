#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{

    int n, t, u;
    string formulaDanger, elementosJuvenal;
    vector <string> blocos;
    cin>> n ;
    for(int i = 0 ; i < n; i++)
    {

        vector<vector<string>> listaPerigos;

        cin >> t;
        for(int j = 0; j < t; j++)
        {
            cin >> formulaDanger;


            vector<string> blocos;
            string blocoAtual = "";

            for(int y = 0; y < formulaDanger.length(); y++)
            {
                if(isupper(formulaDanger[y]))
                {
                    if(!blocoAtual.empty())
                    {
                        blocos.push_back(blocoAtual);
                        blocoAtual = "";
                    }
                    blocoAtual += formulaDanger[y];
                }
                else
                {
                    blocoAtual += formulaDanger[y];
                }
            }

            if (!blocoAtual.empty())
            {
                blocos.push_back(blocoAtual);
            }

            listaPerigos.push_back(blocos);
        }
    }






    return 0;
}
