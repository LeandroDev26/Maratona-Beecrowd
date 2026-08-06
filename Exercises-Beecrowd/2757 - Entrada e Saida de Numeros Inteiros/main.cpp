#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin>> a >> b >> c;
    cout<<"A = "<< a << ", B = "<< b <<", C = "<< c <<endl;





    cout<<"A = "<< setw(10) << a <<endl;

    //1 cout<< left << setw(10) << a << endl;

    cout<< setfill('0') << right << setw(10) << c << endl;

    return 0;
}
