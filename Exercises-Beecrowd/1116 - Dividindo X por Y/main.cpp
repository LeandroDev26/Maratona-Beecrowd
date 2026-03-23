#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y , divi;
    int n;

    cin>> n;

    cout<< fixed << setprecision(1);
    for(int i = 0; i < n ; i++){
         cin>> x >> y;

         if( x != 0 && y == 0){

             cout<<"divisão impossivel"<<endl;
         }

    }




    return 0;
}
