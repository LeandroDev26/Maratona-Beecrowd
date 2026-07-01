#include <iostream>
#include <string>

using namespace std;

int main()
{

    string alfabeto;
    int n, indice;
    while(cin>> alfabeto)
    {

        cin>> n ;
        for(int i = 0 ; i < n; i++)
        {
            cin>> indice;
            if(alfabeto[indice] != '/0' )
            {
               cout<< alfabeto[indice];
            }
        }
           cout<<endl;
    }




    return 0;
}
