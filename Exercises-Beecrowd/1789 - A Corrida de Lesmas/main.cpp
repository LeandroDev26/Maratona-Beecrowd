#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> lesmas;
    int t, l, maior = 0;
    while(cin>> t)
    {
        for(int i = 0 ; i < t; i++)
        {
            cin>> l;
            lesmas.push_back(l);

        }

        for(int j = 0 ; j < lesmas.size(); j++)
        {
            maior = lesmas[0];
            if(lesmas[j] > maior)
            {
                maior = lesmas[j];
            }
        }


    }







    return 0;
}
