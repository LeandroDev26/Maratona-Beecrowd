#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{


    int n;
    string cifra = "";
    map<int, char> alfabeto;

    int numero = 1;
    for (char letra = 'a'; letra <= 'z'; letra++)
    {
        alfabeto[numero] = letra;
        numero++;
    }

    cin>> n;

    for(int i = 0; i < n ; i++ )
    {
        getline(cin, cifra);

        int numpont = 0;

        for(int j = 0; j < cifra.length(); j++)
        {
            if(cifra[j] == '.')
            {
                numpont++;

            }
        }

        cout<< alfabeto[numpont]<<endl;

    }






    return 0;
}
