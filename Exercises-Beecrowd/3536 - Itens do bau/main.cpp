#include <iostream>

using namespace std;

int main()
{

    int n, arco = 0, escudo = 0, espada = 0, pocao = 0 ;
    string nomeItem;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> nomeItem;
        if(nomeItem == "arco")
        {
            arco++;
        }
        else if(nomeItem == "escudo")
        {
            escudo++;
        }
        else if(nomeItem == "espada")
        {
            espada++;
        }
        else if(nomeItem == "pocoes")
        {
            arco++;
        }
    }

    cout<< "arco " << arco <<endl;
    cout<< "escudo" << escudo <<endl;
    cout<< "espada" << espada <<endl;
    cout<< "pocoes" << pocao <<endl;

    return 0;
}
