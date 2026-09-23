#include <iostream>
#include <string>
using namespace std;

int main()
{

    string texto ;
    bool imprimir = false;

    while (getline(cin,texto) )
    {

        if(texto.find("<body>") != string::npos)
        {
            imprimir = true ;
            continue;
        }
        else if(texto.find("</body>") != string::npos)
        {
            imprimir = false ;
            continue;
        }


        if(imprimir)
        {
            cout<< texto <<endl;
        }


    }
    return 0;
}
