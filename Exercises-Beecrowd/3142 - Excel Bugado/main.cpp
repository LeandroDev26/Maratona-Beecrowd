#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;

    while(cin>> s)
    {
        int soma = 0 ;
        for(int i = 0 ; i < s.length(); i++)
        {
            int valor = s[i] - 'A' + 1;
            soma += valor;

        }

        cout << soma << endl;

    }







    return 0;
}
