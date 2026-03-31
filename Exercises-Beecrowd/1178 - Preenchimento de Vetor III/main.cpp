#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{


    double x ;
    vector<double> n;
    cout<< fixed << setprecision(4);

    cin>> x;

    n.push_back(x);

    for( int i = 1; i < 100; i++){

           x += x/2;

               n.push_back(x);

    }










    return 0;
}
