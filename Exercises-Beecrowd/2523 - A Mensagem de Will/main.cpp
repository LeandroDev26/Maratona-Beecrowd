#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string alfabeto, frase;
    char letra;
    int n, indice;
    while(cin>> alfabeto)
    {

        cin>> n ;
        for(int i = 0 ; i < n; i++)
        {
            cin>> indice;
            indice -= 1;
            if(alfabeto[indice] != '/0' )
            {
                letra = alfabeto[indice];
                frase.push_back(letra);
            }
        }
        cout<< frase <<endl;
        alfabeto.clear();
        frase.clear();
    }




    return 0;
}
