#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void imprimirDataFutura(int dias_para_somar)
{
    struct tm data = {0};

    data.tm_year = 2020 - 1900;

    data.tm_mon = 11;

    data.tm_mday = 21 + dias_para_somar;

    data.tm_hour = 12;

    mktime(&data);

    cout << (data.tm_year + 1900) << "-"
         << setfill('0') << setw(2) << (data.tm_mon + 1) << "-"
         << setfill('0') << setw(2) << data.tm_mday << endl;
}
int main()
{

    int n, totDiasjupiter, totDiassaturno ;
    cin>> n ;
    totDiasjupiter = n * 11.9 * 365.25;
    totDiassaturno = n * 29.6 * 365.25;
    cout<< "Dias terrestres para Jupiter = " << totDiasjupiter <<endl;
    cout<< "Data terrestre para Jupiter: ";
    imprimirDataFutura(totDiasjupiter);

    cout<< "Dias terrestres para Saturno = " << totDiassaturno <<endl;
    cout<< "Data terrestre para Saturno: ";
    imprimirDataFutura(totDiassaturno);








    return 0;
}
