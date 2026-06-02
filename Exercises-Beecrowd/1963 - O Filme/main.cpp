#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

   double a , b , valorAumento = 0;

   cin>> a >> b ;

   cout<< fixed << setprecision(2) <<endl;

     valorAumento = (a - b);
    valorAumento /= a;
    valorAumento *= 100;


    return 0;
}
