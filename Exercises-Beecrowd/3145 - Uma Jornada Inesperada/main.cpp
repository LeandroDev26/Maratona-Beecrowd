#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, x;
    cin>> n >> x ;
    cout << fixed << setprecision(2) << (double)x / (n + 2) << "\n";
    return 0;
}
