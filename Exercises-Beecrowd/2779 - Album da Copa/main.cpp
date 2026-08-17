#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m, valor;
    cin>> n >> m ;
    vector<int> numeros;

    for(int i = 0 ; i < m; i++)
    {

        cin>> valor;
        auto it = std::find(numeros.begin(), numeros.end(), valor);

    }










    return 0;
}
