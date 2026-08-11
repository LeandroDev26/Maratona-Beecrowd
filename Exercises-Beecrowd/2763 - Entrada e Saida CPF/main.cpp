#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    string pont1, pont2, hifen;
    while (cin>> num1 >> pont1 >> num2 >> pont2 >> num3 >> hifen >> num4 )
    {
        cout<< setfill('0') << setw(3) << num1 <<endl;
        cout<<  setw(3) << num2 <<endl;
        cout<< setw(3) << num3 <<endl;
        cout<< setw(2) << num4 <<endl;

    }








    return 0;
}
