#include <iostream>

using namespace std;

int main()
{

  int n , x , y , ini , fim , soma;

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


   }


    return 0;
}
