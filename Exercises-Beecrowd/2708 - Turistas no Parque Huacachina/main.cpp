#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t, Gisaidas = 0, Givoltas = 0, passIda = 0, passVolta = 0;
    string acao;
    while((cin>> acao) && acao != "ABEND" )
    {
        cin>> t;

        if(acao == "SALIDA ")
        {
            Gisaidas += t;
        }
        else
        {
            Givoltas += t;
        }
    }









    return 0;
}
