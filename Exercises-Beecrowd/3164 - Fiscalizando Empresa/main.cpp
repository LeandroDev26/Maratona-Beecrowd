#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, x, v;
    while(cin>> n >> v)
    {
        vector<int> listaPesosArvores;

        for(int i = 0; i < n ; i++)
        {
            cin>> x;
            listaPesosArvores.push_back(x);
        }
        sort(listaPesosArvores.begin(), listaPesosArvores.end());
    }












    return 0;
}
