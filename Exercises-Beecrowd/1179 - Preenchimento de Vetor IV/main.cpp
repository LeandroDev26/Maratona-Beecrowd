#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x , contpar = 0, contimp = 0;
    vector<int> pares;
    vector<int> impar;

    for (int i = 0 ; i < 15; i++)
    {
        cin>> x;

        if( x % 2 == 0)
        {
            pares.push_back(x);
            contpar++;

            if (contpar == 4){
                break;
            }
        }
        else
        {
            impar.push_back(x);
            contimp++;

            if(contimp == 4)
        }
    }







    return 0;
}
