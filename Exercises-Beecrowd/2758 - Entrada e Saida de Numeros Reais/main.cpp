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
    }
    while(notasvalidas < 5);









    return 0;
}
