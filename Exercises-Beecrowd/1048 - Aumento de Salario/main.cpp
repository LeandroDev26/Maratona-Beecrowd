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
     cout<< "Reajuste ganho: "<< p <<endl;
     cout<< "Em percentual: 15 %" <<endl;
   }

    if(s > 400.00 && s <= 800.00){

      p = s*0.12;
      s += p;
     cout<< "Novo salario: "<< s <<endl;
     cout<< "Reajuste ganho: "<< p <<endl;
     cout<< "Em percentual: 12%" <<endl;
   }

    if(s > 800.00 && s <= 1200.00){

      p = s*0.10;
      s += p;
     cout<< "Novo salario: "<< s <<endl;
     cout<< "Reajuste ganho: "<< p <<endl;
     cout<< "Em percentual: 10 %" <<endl;
   }

}
