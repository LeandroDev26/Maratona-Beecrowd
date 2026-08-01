#include <iostream>
#include <string>
using namespace std;

int main()
{


    int n;
    string cifra = "";

    while(cin>> n)
    {
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

        }
    }





    return 0;
}
