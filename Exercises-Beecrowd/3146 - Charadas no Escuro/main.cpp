#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float r, c, pi = 3.14;
    cin>> r ;
    c = 2*pi*r;
    cout<< fixed << setprecision(2) << c <<endl;
    return 0;
}
