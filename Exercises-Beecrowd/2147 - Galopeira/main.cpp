#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
     double tempo;
    string frase;
    int c ;
    cin>> c;
    for(int i = 0 ; i < c ; i++)
    {
         cin>> frase ;
         tempo = frase.length();
         cout<< fixed << setprecision(2);
         cout<< tempo / 100 <<endl;

    }

    return 0;
}
