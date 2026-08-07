#include <iostream>

using namespace std;

int main()
{

    int notasvalidas = 0;
    int nota, soma = 0;

    do
    {
        cin>>nota;
        if(nota == -1) break;
        if(nota < 0 || nota > 10) continue;
        notasvalidas++;
        soma += nota;
    }
    while(notasvalidas < 5);

    int media = soma/5;

    cout<<media<<endl;








    return 0;
}
