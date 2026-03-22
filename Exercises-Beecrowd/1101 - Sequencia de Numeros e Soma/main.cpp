#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n, x = 7 , sum = 0;
    vector <int> entrada;


    while(x > 0)
    {

        m = 0 , n = 0;
        cin>> m >> n;

        if(m <= 0 || n <=0)
        {
            x = 0;
        }

        if(n < m)
        {
            int aux = m;
            m = n;
            n = aux;

        }
        entrada.push_back(m);
        entrada.push_back(n);



    }




                  cout<< k << "Sum=" << sum <<endl;


    }







    return 0;
}
