#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, k, x;
    vector <int> competidores;
    cin>> n >> k;
    for(int i = 0; i < n ; i++)
    {
        cin>> x;
        competidores.push_back(x);
    }

    sort(competidores.begin(), competidores.end());





    return 0;
}
