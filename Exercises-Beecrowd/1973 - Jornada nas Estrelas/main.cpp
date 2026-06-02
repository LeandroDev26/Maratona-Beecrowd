#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    long long n, x, somaArray = 0 ;
    vector<long long> qt;
    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        qt.push_back(x);
    }

    somaArray = accumulate(qt.begin(), qt.end(), 0);
    while()


        return 0;
}
