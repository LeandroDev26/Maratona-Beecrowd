#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int encontro[405][405];

int main() {
    int n, c;

    while (cin >> n >> c) {


        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                encontro[i][j] = 2008;
            }
        }

        for (int i = 0; i < c; i++) {
            int a, b, y;
            cin >> a >> b >> y;
            encontro[a][b] = y;
            encontro[b][a] = y;
        }

        int resposta = -1;

        for (int ano = 1948; ano <= 2009; ano++) {

            vector<int> amigos(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i != j && encontro[i][j] < ano) {
                        amigos[i]++;
                    }
                }
            }

            vector<int> fila(n);
            for (int i = 0; i < n; i++) {
                fila[i] = i + 1;
            }


            sort(fila.begin(), fila.end(), [&](int a, int b) {
                return amigos[a] > amigos[b];
            });

            int max_sala1 = (2 * n) / 3;
            int min_sala1 = n - max_sala1;
            bool ano_funciona = false;

            for (int corte = min_sala1; corte <= max_sala1; corte++) {
                bool sala1_ok = true;

                for (int i = 0; i < corte; i++) {
                    for (int j = i + 1; j < corte; j++) {
                        if (encontro[fila[i]][fila[j]] >= ano) {
                            sala1_ok = false;
                            break;
                        }
                    }
                    if (!sala1_ok) break;
                }

                if (!sala1_ok) continue;

                bool sala2_ok = true;

                for (int i = corte; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (encontro[fila[i]][fila[j]] < ano) {
                            sala2_ok = false;
                            break;
                        }
                    }
                    if (!sala2_ok) break;
                }

                if (sala2_ok) {
                    ano_funciona = true;
                    break;
                }
            }

            if (ano_funciona) {
                resposta = ano;
                break;
            }
        }

        if (resposta != -1) {
            cout << resposta << "\n";
        } else {
            cout << "Impossible\n";
        }
    }

    return 0;
}
