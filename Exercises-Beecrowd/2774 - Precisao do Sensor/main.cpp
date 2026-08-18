#include <iostream>
#include <vector>
using namespace std;

int main()
{


    int h, m ;
    vector<float> lista;
    while(cin>> h >> m)
    {
        int totmin = (h*60);
        int qt = totmin/m;

        for(int i = 0 ; i < qt; i++)
        {
            float xi;
            cin>> xi;
            lista.push_back(xi);

        }

    }






    return 0;
}
