#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

// 1. Criamos a struct OUTSIDE da main. Ela agrupa as características de uma magia.
struct Magia {
    int dano;
    int raios[3]; // Um array com 3 posições para os raios dos níveis 1, 2 e 3
};

int main()
{
    // Otimização para leitura de dados em maratonas de programação
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. Declaramos o mapa. A chave é uma string (nome) e o valor é a nossa struct (Magia)
    map<string, Magia> tabelaMagias;

    // 3. Preenchemos o mapa antes de começar o loop (já que esses dados nunca mudam)
    // A sintaxe entre chaves { } preenche diretamente os campos da struct na ordem (dano, {raios})
    tabelaMagias["fire"]  = {200, {20, 30, 50}};
    tabelaMagias["water"] = {300, {10, 25, 40}};
    tabelaMagias["earth"] = {400, {25, 55, 70}};
    tabelaMagias["air"]   = {100, {18, 38, 60}};

    int t, w, h, x0, y0;
    if (!(cin >> t)) return 0;

    for(int i = 0 ; i < t; i++)
    {
        // Lendo os dados do retângulo (inimigo)
        cin >> w >> h >> x0 >> y0;

        // Lendo os dados do feitiço lançado
        string nomeMagia;
        int nivel, cx, cy;
        cin >> nomeMagia >> nivel >> cx >> cy;

        // ==========================================================
        // COMO USAR A STRUCT COMBINADA COM O MAP:
        // ==========================================================

        // Buscamos a ficha da magia usando o nome dela como chave
        Magia magiaAtual = tabelaMagias[nomeMagia];

        // Agora acessamos as propriedades da struct que recuperamos:
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
