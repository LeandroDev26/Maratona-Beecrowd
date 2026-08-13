#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{


    string nome;
    vector<string> listadeNomes;

    while(cin>> nome)
    {

        listadeNomes.push_back(nome);
        for(int i = 0 ; i < 9; i++)
        {
            cin>> nome;
            listadeNomes.push_back(nome);

        }
    }







    return 0;
}
