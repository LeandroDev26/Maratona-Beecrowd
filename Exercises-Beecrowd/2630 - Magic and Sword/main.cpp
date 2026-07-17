#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

struct Magia {
    int dano;
    int raios[3];
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, Magia> tabelaMagias;


    tabelaMagias["fire"]  = {200, {20, 30, 50}};
    tabelaMagias["water"] = {300, {10, 25, 40}};
    tabelaMagias["earth"] = {400, {25, 55, 70}};
    tabelaMagias["air"]   = {100, {18, 38, 60}};

    int t, w, h, x0, y0;
    if (!(cin >> t)) return 0;

    for(int i = 0 ; i < t; i++)
    {
        cin >> w >> h >> x0 >> y0;

        string nomeMagia;
        int nivel, cx, cy;
        cin >> nomeMagia >> nivel >> cx >> cy;


        Magia magiaAtual = tabelaMagias[nomeMagia];

        int danoMagia = magiaAtual.dano;

        // Subtraímos 1 do nível porque o array começa no índice 0.
        // Nível 1 está no índice 0, Nível 2 no 1, e Nível 3 no 2.
        int raioMagia = magiaAtual.raios[nivel - 1];

        // ==========================================================
        // LÓGICA GEOMÉTRICA (CÁLCULO DA COLISÃO)
        // ==========================================================

        // Definimos as fronteiras/limites do retângulo do inimigo
        int x_min = x0;
        int x_max = x0 + w;
        int y_min = y0;
        int y_max = y0 + h;

        // Encontramos o ponto do retângulo mais próximo do centro do círculo (Função Clamp)
        // Se cx estiver fora do retângulo, ele assume o limite do retângulo (x_min ou x_max)
        int x_proximo = max(x_min, min(cx, x_max));
        int y_proximo = max(y_min, min(cy, y_max));

        // Calculamos os catetos (distância em X e em Y) entre o centro do círculo e o ponto mais próximo
        int dist_x = cx - x_proximo;
        int dist_y = cy - y_proximo;

        // Teorema de Pitágoras (Distância ao Quadrado = ca^2 + cb^2)
        int distancia_quadrado = (dist_x * dist_x) + (dist_y * dist_y);
        int raio_quadrado = raioMagia * raioMagia;

        // Se a distância ao quadrado for menor ou igual ao raio ao quadrado, houve colisão
        if (distancia_quadrado <= raio_quadrado) {
            cout << danoMagia << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
