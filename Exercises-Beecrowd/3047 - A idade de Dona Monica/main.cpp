#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int m, a, b, c, tot  , maisVelho = 0;

    cin>> m >> a >> b;
    tot = a + b;
    c = (m - tot );
    maisVelho = max(a , max(b , c));
    cout<< maisVelho  <<endl;

    return 0;
}
