#include <iostream>

using namespace std;

int main()
{

  int n , x , y , ini , fim , impares;

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

     for( int i = ini + 1; i < fim; i++)
    {
        if(i % 2 != 0)
        {
            impares += i;
        }
    }


   }

   cout<<impares<<endl;


    return 0;
}
