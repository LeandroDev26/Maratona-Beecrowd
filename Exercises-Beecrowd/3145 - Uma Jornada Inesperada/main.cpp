#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, x, totP, totD;
    cin>> n >> x ;
    totP = n + 2;
    totD = x /totP;
    cout<< fixed << setprecision(2) << totD << "\n";

    return 0;
}
