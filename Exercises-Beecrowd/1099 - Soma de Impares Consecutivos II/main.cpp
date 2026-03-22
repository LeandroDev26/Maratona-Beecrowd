#include <iostream>
#include <vector>

using namespace std;

int main()
{

  int n , x , y , ini , fim , soma = 0;
  vector<int> results;
  cin>> n;

   for(int i = 0; i < n; i++){

    cin>> x >> y ;

    if( x > y)
    {

        ini = y;
        fim = x;
    }else
     {

    ini = x;
    fim = y;

     }

     for( int k = ini + 1; k < fim; k++)
    {
        if(k % 2 != 0)
        {
            soma += k;
            results.push_back(soma);
        }
    }


   }

   for(int i = 0; i < results.size(); i++){

        cout<< results[i];
   }



    return 0;
}
