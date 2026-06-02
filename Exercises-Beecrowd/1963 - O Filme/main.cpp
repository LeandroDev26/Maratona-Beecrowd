#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

   double a , b , valorAumento = 0;

   cin>> a >> b ;

   cout<< fixed << setprecision(2) <<endl;

     valorAumento = abs(b - a);
    valorAumento /= a;
    valorAumento *= 100;

     cout<< valorAumento << "%" << endl;

    return 0;
}
