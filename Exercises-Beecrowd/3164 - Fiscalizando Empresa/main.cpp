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


        double pos1 = 1.0 * (n + 1) / 4.0;
        double pos3 = 3.0 * (n + 1) / 4.0;

        int k1 = (int)pos1;
        double f1 = pos1 - k1;

        int k3 = (int)pos3;
        double f3 = pos3 - k3;

        double q1, q3;


        q1 = listaPesosArvores[k1 - 1] + f1 * (listaPesosArvores[k1] - listaPesosArvores[k1 - 1]);

        q3 = listaPesosArvores[k3 - 1] + f3 * (listaPesosArvores[k3] - listaPesosArvores[k3 - 1]);
    }












    return 0;
}
