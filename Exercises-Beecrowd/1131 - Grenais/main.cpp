#include <iostream>

using namespace std;

int main()
{
    int opc = 1 , ga = 0 , gb = 0;

    while(opc == 1)
    {

      cin>> ga >> gb;


     opc = 0;
     while(opc != 1 && opc != 2){
        cout<<"Novo grenal (1-sim 2-nao)"<< endl;
        cin>> opc;
     }

    }





    return 0;
}
