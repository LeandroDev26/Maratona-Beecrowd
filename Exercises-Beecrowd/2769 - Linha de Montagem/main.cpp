#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, e1, e2, x1, x2;
    vector < int > linha1;
    vector < int > linha2;
    vector < int >  linha1_2;
    vector < int > linha2_1;

    while(cin>> n)
    {
        cin>> e1 >> e2;
        for(int i = 0 ; i < n ; i++)
        {
            int z;
            cin>> z;
            linha1.push_back(z);
        }

        for(int j = 0 ; j < n ; j++)
        {
            int z;
            cin>> z;
            linha2.push_back(z);

        }

        for(int l = 1 ; l < n ; l++)
        {
            int z;
            cin>> z;
            linha1_2.push_back(z);
        }

        for(int k = 1 ; k < n ; k++)
        {
            int z;
            cin>> z;
            linha2_1.push_back(z);

        }

        cin>> x1 >> x2;


    }


    return 0;
}
