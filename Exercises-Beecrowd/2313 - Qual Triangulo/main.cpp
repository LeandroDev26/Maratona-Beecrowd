#include <iostream>

using namespace std;

int main()
{

    int a, b, c ;
    cin>> a >> b >> c;

    if ( a + b > c || a + c > b || b + c > a )
    {
      if(a == b && b == c){
        cout<<"Valido-Equilatero"<<endl;
      }
    }
    else
    {
        cout<<"Invalido"<<endl;
    }




    return 0;
}
