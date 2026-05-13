#include <iostream>

using namespace std;

int main()
{

    int n, cont;

    while (  cin>> n && n != 0)
    {
        cont = 1;
        for (int i = 1 ; i <= n; i++)
        {

            for(int j = 1 ; j <= n; j++)
            {

                if (cont != n)
                {
                    cout<< j << " ";
                }
                else
                {

                    cout<<  j <<endl;
                }

                cont++;

            }
        }
    }










    return 0;
}
