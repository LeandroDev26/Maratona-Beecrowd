#include <iostream>

using namespace std;

int main()
{

    int n, cont = 0;

    while (  cin>> n && n != 0)
    {
        for (int i = 1 ; i <= n; i++)
        {

            for(int j = 1 ; j <= n; j++)
            {
                cont ++;
                if (cont == n -1)
                {
                    cout<<  j <<endl;
                }
                else
                {

                    cout<< j << " ";
                }

            }
        }
    }










    return 0;
}
