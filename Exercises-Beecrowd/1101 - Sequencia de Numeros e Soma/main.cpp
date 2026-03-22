#include <iostream>

using namespace std;

int main()
{
    int m, n, x = 7;


    while(x <= 0)
    {

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

      for(int i = m ; i <= n; i++){
           cout<< i ;
      }



    }



    return 0;
}
