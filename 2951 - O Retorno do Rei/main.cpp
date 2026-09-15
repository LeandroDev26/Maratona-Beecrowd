#include <iostream>
#include <map>
using namespace std;

int main()
{
  // g = tot necessario para vencer e n = casos de teste x = a qtd de vezes que recitaram
      map<char , int> runas;
    int n, g , x , ri ;
    char vi , runaRs;
    cin>> n >> g;
    for(int i = 0 ; i < n; i++){
        cin>> vi >> ri;
        runas.insert({vi, ri});
    }







    return 0;
}
