#include <iostream>
#include <bitset>
using namespace std;

int main()
{


    int n, x;
    string binario;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        bitset<8> binario(x);
        int lampadasQuebradas = 0;

        for(int j = 0; j < binario.size(); j++)
        {
            if(binario[j] == 1)
            {

            }
        }
    }






    return 0;
}
