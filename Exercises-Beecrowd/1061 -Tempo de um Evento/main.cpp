#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lixo;
    int diaIni, horaIni, minIni, segIni, diaFin, horaFin, minFin, segFin, totini, totfin;

    cin>> lixo >> diaIni;
    cin>>horaIni >> lixo >> minIni >> lixo >> segIni;
    cin>> lixo >> diaFin;
    cin>>horaFin >> lixo >> minFin>> lixo >> segFin;

    // total de segundos iniciais
    totini +=  (diaIni * 86400);
    totini += (diaIni * 3600);
    totini += (diaIni * 60);

    // total de segundos finais
    totfin +=  (diaFin * 86400);
    totfin += (diaFin * 3600);
    totfin += (diaFin* 60);

    int total =(totini - totfin);







        return 0;
}
