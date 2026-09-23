#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;

    while(cin>> s)
    {
        int total = 0 ;
        for(int i = 0 ; i < s.length(); i++)
        {
            int valor = s[i] - 'A' + 1;
            total = ( total * 26 ) + valor;

        }
        if(total > 16384)
        {
            cout<< "Essa coluna nao existe Tobias!" <<endl;
        }
        else
        {
            cout << total << endl;

        }

    }







    return 0;
}
