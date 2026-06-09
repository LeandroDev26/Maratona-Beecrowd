#include <iostream>

using namespace std;

int main()
{
    int meses[12] = {31, 29 , 31, 30, 31 , 30 , 31 , 31 , 30, 31 , 30 ,31};
    int m , d , soma = 0;

    for(int i = 0 ; i < 12; i++){
      soma += meses[i];
    }


    /*while( cin>> m >> d)
    {

    }

*/



    return 0;
}
