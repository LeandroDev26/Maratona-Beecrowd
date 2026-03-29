#include <iostream>

using namespace std;

int main()
{

  int n , x , cont = 0;

  for (int i = 0 ; i < n ; i++){

         cin>> x ;
         cont = 0;

         for(int i = 1; i <= x; i++){

                if( x % i == 0){
                    cont++;
                }
         }


  }






    return 0;
}
