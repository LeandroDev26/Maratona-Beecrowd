#include <iostream>

using namespace std;

int main()
{


    int n ;
    cin>> n;

    /*
     1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
     */

     if( n - 1000 >= 0 ){
        cout<< "M";
        n -= 1000;
     }


    return 0;
}
