#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, y, maior = 0;
    vector <int> x;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> y;
        x.push_back(y);
    }

    for(int k = 0 ; k < x.size(); k++)
    {
        maior = x[0];

        if(maior < x[k])
        {
            maior = x[k];
        }
    }






    return 0;
}
