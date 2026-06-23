#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    cout<< fixed << setprecision(2);
    int n ;
    string nome;
    vector <double> notas;
    double gd, n1, maior = 0, menor = 0, soma = 0;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> nome >> gd;
        soma = 0;
        for(int j = 0 ; j < 7; j++)
        {
            cin>> n1;
            soma += n1;
            notas.push_back(n1);
        }
        maior = 0;
        menor = 10;
        for(int l = 0 ; l < notas.size(); l++)
        {
            if(notas[l] > maior)
            {

                maior = notas[l];
            }

            if(notas[l] < menor)
            {
                menor = notas[l];
            }
        }

    }








    return 0;
}
