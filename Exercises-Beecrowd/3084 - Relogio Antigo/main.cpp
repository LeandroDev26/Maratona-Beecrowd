#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, m ;

    while ( cin>> h >> m)
    {
        int horas, minutos ;

        horas = h / 30;
        minutos = m / 6;

        cout<< setw(2) << setfill('0') << horas << ":" <<  setw(2) << setfill('0') << minutos <<endl;
    }

    return 0;
}
