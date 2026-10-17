#include <iostream>
#include <string>

using namespace std;

int main()
{

    string fraseDia, fraseMedico;
    int posicaoIni = 0, posicaoMeta = 0;
    cin>> fraseDia >> fraseMedico;

    for(int i = 0 ; i < fraseDia.length(); i++)
    {

        if( fraseDia[i] == 'h')
        {
            posicaoIni = i;
        }
    }

    for(int j = 0 ; j < fraseMedico.length(); j++)
    {
        if( fraseMedico[j] == 'h')
        {
            posicaoMeta = j;
        }
    }

    if(posicaoIni >= posicaoMeta)
    {
        cout<< "go" <<endl;
    }
    else
    {
        cout<< "no" <<endl;
    }

    return 0;
}
