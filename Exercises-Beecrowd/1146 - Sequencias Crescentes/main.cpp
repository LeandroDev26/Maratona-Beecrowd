#include <iostream>

using namespace std;

int main()
{
    int x = 0, cont = 0;

    while(1)
    {

        cin>> x ;
        if( x == 0)
        {
            break;
        }

        for( int i = 1 ; i <= x; i++)
        {

            if(cont == x)
            {

                cout<< i <<endl;
                cont = 0;

            }
            else
            {
              cout<< i <<" ";
            }


        }




    }








    return 0;
}
