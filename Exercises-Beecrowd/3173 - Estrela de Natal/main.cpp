#include <iostream>
#include <iomanip> // Para formatar a saída (ex: 07 em vez de 7)
#include <ctime>   // Para a estrutura tm e mktime

using namespace std;

void imprimirDataFutura(int dias_para_somar) {
    struct tm data = {0};

    // A data inicial é 21/12/2020
    // Regra 1: O ano no struct tm é (Ano - 1900)
    data.tm_year = 2020 - 1900;

    // Regra 2: Os meses vão de 0 (Jan) a 11 (Dez)
    data.tm_mon = 11;

    // O pulo do gato: some os dias calculados diretamente no dia do mês
    data.tm_mday = 21 + dias_para_somar;

    // Define a hora para o meio-dia para evitar bugs com horário de verão
    data.tm_hour = 12;

    // A função mktime recalcula a data, transformando dias estourados na data real
    mktime(&data);

    // Imprime no padrão AAAA-MM-DD
    cout << (data.tm_year + 1900) << "-"
         << setfill('0') << setw(2) << (data.tm_mon + 1) << "-"
         << setfill('0') << setw(2) << data.tm_mday << endl;
}
int main()
{

    int n , totDiasjupiter , totDiassaturno ;
    cin>> n ;
    totDiasjupiter = n * 11.9 * 365.25;
    totDiassaturno = n * 29.6 * 365.25;








    return 0;
}
