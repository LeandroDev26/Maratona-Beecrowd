#include <iostream>
#include <string>

using namespace std;

int main()
{

   int n ;
   string opc1 , opc2;

   cin>> n;
   for(int i = 0 ; i < n; i++){

        cin>> opc1 >> opc2 ;

        if(opc1 == "ataque" && opc2 == "pedra"){
             cout<<"Jogador 1 venceu"<<endl;
        }
   }






    return 0;
}
