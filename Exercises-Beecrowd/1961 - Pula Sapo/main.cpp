#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int p, n, x, diferenca, ok = 0;;
    vector<int> altura;
    cin>> p >> n;

    for (int i = 0 ; i < n; i++)
    {
        cin>> x ;
        altura.push_back(x);

    }

    for( int j = 0 ; j < altura.size(); j++)
    {

        diferenca = abs(altura[j] - altura[j+1]);

        if(diferenca <= p )
        {
            ok++;

        }
        else
        {
          cout<< "GAME OVER" <<endl; // perdeu
         return 0;
        }

        if(ok == (n -1))
        {
            cout<< " YOU WIN"<<endl;  //ganhou
        }
    }


    return 0;
}
