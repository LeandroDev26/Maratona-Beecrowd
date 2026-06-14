#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool ehvalido = true;
    int n, r;
    vector<int> rotacoes;
    cin>> n;


    for(int i = 0 ; i < n; i++)
    {
        cin>> r;
        rotacoes.push_back(r);


    }
    for(int j = 1 ; j < rotacoes.size(); j++)
    {
        int atual = rotacoes[j];
        int antes = rotacoes[j-1];

        if( atual < antes)
        {
            cout<< j <<endl;
            ehvalido = false;
            break;
        }

    }
    if(ehvalido)
    {
        cout<<"0"<<endl;
    }


    return 0;
}
