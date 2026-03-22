#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n, x = 7;
    vector <int> menor;
        vector <int> maior;


    while(x > 0)
    {

        m = 0 , n = 0;
        cin>> m >> n;

        if(m <= 0 || n <=0)
        {
            return 0;
        }

        if(n < m)
        {
            int aux = m;
            m = n;
            n = aux;

        }

      menor.push_back(m);
      maior.push_back(n);


    }



    return 0;
}
