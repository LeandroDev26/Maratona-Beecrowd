#include <iostream>

using namespace std;

int main()
{
    int n , x , soma = 0;

    cin>> n;

    for(int i = 0; i < n ; i++){

         cin>> x;

        for(int k = 1; k < x; k++){

             if( k % x == 0 ){

                  soma += k;
             }
        }



    }




    return 0;
}
