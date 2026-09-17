#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, l, c, r;
    int INF = 999999;

    while (cin >> m && m != 0)
    {

        int custoEsq = 1, custoCen = 0, custoDir = 1;

        for(int i = 0; i < m; i++)
        {
            cin >> l >> c >> r;


            int novoEsq, novoCen, novoDir;

            if (l == 1)
            {
                novoEsq = INF;
            }
            else
            {
                novoEsq = min(custoEsq, min(custoCen + 1, custoDir + 2));
            }
            if (c == 1)
            {
                novoCen = INF;
            }
            else
            {
                novoCen= min(custoCen, min(custoEsq + 1, custoDir + 1));
            }
            if (r == 1)
            {
                novoDir = INF;
            }
            else
            {
                novoDir = min(custoDir, min(custoCen + 1, custoEsq+ 2));
            }



            custoEsq = novoEsq;
            custoCen = novoCen;
            custoDir = novoDir;
        }

         int menor = min(custoEsq, min(custoCen , custoDir));
         cout<< menor <<endl;

    }

    return 0;
}
