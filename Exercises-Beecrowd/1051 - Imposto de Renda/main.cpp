#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s, imposto;
    cin>> s;
    cout<< fixed << setprecision(2);
    if( s > 0.00 && s <= 2000.00)
    {
        cout<< "Isento" <<endl;
    }
    else
    {
        s -= 2000.00;
        double fatia = (s*0.08);
        imposto = fatia;
        if( s > 1000.00)
        {
            s -= 1000.00;
            double fatia2 = (s*0.18);
        }
        else
        {
            cout<< "R$ "<< imposto <<endl;
        }



    }


    return 0;
}
