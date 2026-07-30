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
        cin>> t;

        for(int j = 0; j < t; j++)
        {
            cin>> formulaDanger;
            string blocoAtual = "";
            for(int y = 0; y < formulaDanger.length(); y++)
            {
                if(isupper(formulaDanger[y]))
                {
                    if(!blocoAtual.empty())
                    {
                        blocos.push_back(blocoAtual);
                        string blocoAtual = "";

                    }

                }
                else
                {
                    blocoAtual += formulaDanger[y];
                }
            }

            blocos.push_back(blocoAtual);

        }

        cin>> u;

        for(int k = 0; k < u; k++)
        {
            cin>>elementosJuvenal;
        }


    }






    return 0;
}
