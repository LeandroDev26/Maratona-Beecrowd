#include <iostream>
#include <string>

using namespace std;

int main()
{

    string frase;

    while(getline(cin, frase))
    {

        if(frase == "esquerda")
        {
            cout<<"ingles"<<endl;
        }
        else if( frase == "direita")
        {
            cout<<"frances"<<endl;
        }

    }







    return 0;
}
