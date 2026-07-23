#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t, jipeIndo = 0, jipeVoltando = 0, passIda = 0, passVolta = 0;
    string acao;
    while((cin>> acao) && acao != "ABEND" )
    {
        cin>> t;

        if(acao == "SALIDA ")
        {
            jipeIndo++;
            passIda += t;
        }
        else
        {
            jipeVoltando++;
            passVolta += t;
        }
    }









    return 0;
}
