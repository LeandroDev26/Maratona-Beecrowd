#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Estrutura para armazenar as coordenadas 3D de cada nave
struct Nave {
    int x, y, z;
};

// Função que calcula a distância entre duas naves
double calcularDistancia(Nave n1, Nave n2) {
    return sqrt(pow(n1.x - n2.x, 2) + pow(n1.y - n2.y, 2) + pow(n1.z - n2.z, 2));
}

int main() {
    // Otimização para leitura e escrita no C++ (útil em problemas de maratona)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (cin >> N) {
        vector<Nave> naves(N);

        // Leitura das coordenadas das naves
        for (int i = 0; i < N; ++i) {
            cin >> naves[i].x >> naves[i].y >> naves[i].z;
        }

        // Para cada nave, descobrir a distância para a nave mais próxima
        for (int i = 0; i < N; ++i) {
            double menor_distancia = 1e9; // Valor inicial arbitrariamente grande

            for (int j = 0; j < N; ++j) {
                if (i == j) continue; // Ignora a distância da nave para ela mesma

                double dist = calcularDistancia(naves[i], naves[j]);
                if (dist < menor_distancia) {
                    menor_distancia = dist;
                }
            }

            // Classificação e impressão da intensidade do sinal
            if (menor_distancia <= 20.0) {
                cout << "A\n";
            } else if (menor_distancia <= 50.0) {
                cout << "M\n";
            } else {
                cout << "B\n";
            }
        }
    }

    return 0;
}
