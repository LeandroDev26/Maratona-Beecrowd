#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int p, n, x, diferenca;
    vector<int> altura;
    cin>> p >> n;

    for (int i = 0 ; i < n; i++)
    {
        cin>> x ;
        altura.push_back(x);

    }

    for( int j = 0 ; j < altura.size(); j++)
    {

        diferenca = p - altura[j];

        if(diferenca > p)
        {
            cout<< "GAME OVER" <<endl; // perdeu
            return 0;
        }
        else
        {
          cout<< " YOU WIN"<<endl;  //ganhou
        }

    }






    return 0;
}
