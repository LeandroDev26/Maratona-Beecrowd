#include <iostream>

using namespace std;

int main()
{

    int n, caso = 1, totnum = 0 ;

    while(cin>> n)
    {

        if( n <= 0)
        {
            cout<< "Caso " << caso << ":" <<  totnum <<" numero"<<endl;
        }
        else
        {
            cout<< "Caso " << caso << ":" <<  totnum <<" numeros"<<endl;

        }







        cout<<"0 ";
        for (int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                cout<< i <<" ";
            }

        }

        cout<<endl;
        cout<<endl;



    }






    return 0;
}
