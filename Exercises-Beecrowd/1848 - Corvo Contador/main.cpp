#include <iostream>
#include <string>

using namespace std;

int main()
{

    string corvo;
    int soma = 0;

    for(int i = 0 ; i < 1000 ; i++)
    {
        cin>> corvo;

        if(corvo == "---")
        {
            soma += 0;
        }
        else if( corvo == "--*")
        {
            soma += 1;
        }
    }








    return 0;
}
