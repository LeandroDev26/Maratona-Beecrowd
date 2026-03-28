#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s = 0 , k = 1.0;

    for(int i = 1; i <= 39; i+=2 )
    {
         s += ( (k*2)/i);
    }
     cout<< fixed << setprecision(2);
     cout<< s <<endl;


    return 0;
}
