#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    queue<int> fila;
    vector<int> dist(f + 1, -1);

    fila.push(s);
    dist[s] = 0;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        // Tentativa de subir
        int proximo_cima = atual + u;
        if (proximo_cima <= f && dist[proximo_cima] == -1) {
            dist[proximo_cima] = dist[atual] + 1;
            fila.push(proximo_cima);
        }

        // Tentativa de descer
        int proximo_baixo = atual - d;
        if (proximo_baixo >= 1 && dist[proximo_baixo] == -1) {
            dist[proximo_baixo] = dist[atual] + 1;
            fila.push(proximo_baixo);
        }
    }

    // Verifica se o andar alvo foi alcançado
    if (dist[g] != -1) {
        cout << dist[g] << "\n";
    } else {
        cout << "use the stairs\n";
    }

    return 0;
}
