#include <iostream>

using namespace std;

int main()
{

    int a = 0, n = 0 , soma = 0;

    cin>> a >> n;

    if(n <= 0)
    {
        while(n <= 0)
        {
            cin>> n;
        }
    }

    for(int i = 0; i <= n; i ++)
    {
       soma += (a+i);


    }

    cout << soma ;





    return 0;
}
