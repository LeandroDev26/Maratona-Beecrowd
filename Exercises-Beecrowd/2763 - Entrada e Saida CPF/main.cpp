#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    string pont1, pont2, hifen;
    while (cin>> num1 >> pont1 >> num2 >> pont2 >> num3 >> hifen >> num4 )
    {
        if(num1 != 0 )
        {
            cout<< setw(3) << num1 <<endl;

        }
        else
        {
            cout<< setfill('0') << setw(3) << num1 <<endl;

        }
        if(num2 != 0 )
        {
            cout<< setw(3) << num2<<endl;

        }
        else
        {
            cout<< setfill('0') << setw(3) << num2 <<endl;

        }
        if(num3 != 0 )
        {
            cout<< setw(3) << num3 <<endl;

        }
        else
        {
            cout<< setfill('0')<<setw(3) << num3 <<endl;

        }
        if(num4 != 0 )
        {
            cout<< setw(3) << num4 <<endl;

        }
        else {}











        cout<< setfill('0') << setw(3) << num2 <<endl;
        cout<< setfill('0')<<setw(3) << num3 <<endl;
        cout<< setfill ('0')<<setw(2) << num4 <<endl;
    }








    return 0;
}
