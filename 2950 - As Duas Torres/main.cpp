#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n, x, y ;
    cin>> n >> x >> y;
    double result =  double(n/(x+y));
    cout<< fixed << setprecision(2);
    cout<< result <<endl;

    return 0;
}
