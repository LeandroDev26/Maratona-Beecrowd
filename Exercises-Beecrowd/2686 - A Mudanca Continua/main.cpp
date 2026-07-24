#include <iostream>

using namespace std;

int main()
{
    double graus ;
    while (cin>> graus)
    {
        int horas = 0, minutos = 0, segundos = 0, totseg = 0 , segundosrestante = 0 , segundosfinais = 0;
        totseg = (graus*240.0);
        totseg += 21600.0;
        segundos = totseg;
        segundos = segundos % 86400;

        horas = segundos / 3600;

    }






    return 0;
}
