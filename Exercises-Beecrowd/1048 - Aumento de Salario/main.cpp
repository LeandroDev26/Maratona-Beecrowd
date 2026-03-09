#include <iostream>

using namespace std;

int main()
{
   double s , p;
   cin>> s;

   if(s > 0 && s <= 400.00){

      p = s*0.15;
      s += p;
     cout<< "Novo salario: "<< s <<endl;
   }

}
