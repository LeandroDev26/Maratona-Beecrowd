#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string tipo;
    int n, cobaias , soma = 0;
    vector<int> numeros;
    cin>> n;

    for( int i = 0; i < n ; i++)
    {
        cin>> cobaias >> tipo ;
        numeros.push_back(cobaias);

    }

    return 0;
}
