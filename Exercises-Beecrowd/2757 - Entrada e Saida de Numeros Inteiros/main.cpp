#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin>> a >> b >> c;
    cout<<"A = "<< a << ", B = "<< b <<", C = "<< c <<endl;
    cout<<"A = "<< setw(10) << a << "," << " B = "<< setw(10) << b << "," << " C = "<< setw(10) << c <<endl;
    cout << "A = "<< setfill('0') << right << setw(10) << a << ","<< " B = "<< setfill('0') << right << setw(10) << b << ",123" <<" C = "<< setfill('0') << right << setw(10) << c << endl;
    cout<<"A = "<< a << setw(10) << "," << " B = "<< b << setw(10) << "," << " C = "<< c << setw(10) <<endl;

    return 0;
}
