#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, k, x, classificados = 0;
    vector <int> competidores;
    cin>> n >> k;
    for(int i = 0; i < n ; i++)
    {
        cin>> x;
        competidores.push_back(x);
    }

    sort(competidores.rbegin(), competidores.rend());

    for(int j = 0; j < competidores.size(); j++)
    {

    }



    return 0;
}
