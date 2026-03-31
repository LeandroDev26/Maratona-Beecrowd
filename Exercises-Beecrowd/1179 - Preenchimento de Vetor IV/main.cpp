#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x ;
    vector<int> pares;
    vector<int> impar;

    for (int i = 0 ; i < 15; i++)
    {
          cin>> x;

          if( x % 2 == 0){
            pares.push_back(x);
          }
    }







    return 0;
}
