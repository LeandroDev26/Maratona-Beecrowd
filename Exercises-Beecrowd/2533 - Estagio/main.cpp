#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int m , c , n , ira;
    cout<< fixed << setprecision(4);
    while (cin>> m)
    {
        int totn = 0 , totc = 0;
        ira = 0;
        for(int i = 0; i < m; i++){
            cin>> n >> c;
             totn += n;
             totc += c;
        }

         ira = (totn)/(totc*100);
         cout<< ira <<endl;

    }





    return 0;
}
