#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long v;

    while(cin >> n >> v)
    {
        vector<int> listaPesosArvores;
        int x;

        for(int i = 0; i < n ; i++)
        {
            cin >> x;
            listaPesosArvores.push_back(x);
        }

        sort(listaPesosArvores.begin(), listaPesosArvores.end());

        //Posições e valores dos quartis
        double pos1 = 1.0 * (n + 1) / 4.0;
        double pos3 = 3.0 * (n + 1) / 4.0;

        int k1 = (int)pos1;
        double f1 = pos1 - k1;

        int k3 = (int)pos3;
        double f3 = pos3 - k3;

        // Proteção de segurança: garante que o índice não será menor que 0 nem maior que n-1.
        // Isso evita "Segmentation Fault" caso n seja muito pequeno (ex: n=1)
        int idx_k1 = max(0, min(n - 1, k1 - 1));
        int idx_k1_next = max(0, min(n - 1, k1));

        int idx_k3 = max(0, min(n - 1, k3 - 1));
        int idx_k3_next = max(0, min(n - 1, k3));

        double q1 = listaPesosArvores[idx_k1] + f1 * (listaPesosArvores[idx_k1_next] - listaPesosArvores[idx_k1]);
        double q3 = listaPesosArvores[idx_k3] + f3 * (listaPesosArvores[idx_k3_next] - listaPesosArvores[idx_k3]);

        // Cálculo do Boxplot (IQR e Limites)
        double iqr = q3 - q1; // Amplitude Interquartil

        double limite_inferior = q1 - 1.5 * iqr;
        double limite_superior = q3 + 1.5 * iqr; // Usando '+' no lugar do '-' errado da fórmula do problema

        //Contagem de extremos (Outliers)
        long long p = 0; // Quantidade de valores extremos

        for(int i = 0; i < n; i++)
        {
            // Se o peso estiver fora dos limites estabelecidos, é um extremo
            if(listaPesosArvores[i] < limite_inferior || listaPesosArvores[i] > limite_superior)
            {
                p++;
            }
        }

        // CÁLCULO FINAL: Multa total = Extremos encontrados * valor unitário da multa
        long long multaTotal = p * v;

        cout << multaTotal << "\n";
    }

    return 0;
}
