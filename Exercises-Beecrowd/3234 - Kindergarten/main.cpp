#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função para verificar se é possível colorir o grafo de tamanho N em 3 cores (turmas 0, 1, 2)
// respeitando as restrições:
// 1. Nenhuma criança pode ter a mesma cor (professor) do ano anterior.
// 2. Duas crianças só podem ficar na mesma turma se a preferência mútua estiver dentro do limite T.
bool check(int n, int T, const vector<int>& prof_atual, const vector<vector<int>>& pref, vector<int>& cor, int idx) {
    if (idx == n) {
        // Verifica se cada grupo tem pelo menos alguém ou se as 3 turmas foram formadas
        // (na verdade, a partição pode usar até 3 turmas)
        return true;
    }

    for (int c = 0; c < 3; ++c) {
        // Restrição 1: Não pode ser o mesmo professor do ano anterior
        if (c == prof_atual[idx]) continue;

        // Verifica se é compatível com todas as crianças já colocadas na turma c
        bool valido = true;
        for (int i = 0; i < idx; ++i) {
            if (cor[i] == c) {
                // Se estão na mesma turma, ambas devem se considerar dentro do limite T nas preferências
                // Vamos checar se 'idx' está entre as T primeiras de 'i' e vice-versa
                bool i_gosta_de_idx = false;
                for (int k = 0; k < T; ++k) {
                    if (pref[i][k] == idx + 1) { // pref armazena IDs de 1 a n
                        i_gosta_de_idx = true;
                        break;
                    }
                }

                bool idx_gosta_de_i = false;
                for (int k = 0; k < T; ++k) {
                    if (pref[idx][k] == i + 1) {
                        idx_gosta_de_i = true;
                        break;
                    }
                }

                if (!i_gosta_de_idx || !idx_gosta_de_i) {
                    valido = false;
                    break;
                }
            }
        }

        if (valido) {
            cor[idx] = c;
            if (check(n, T, prof_atual, pref, cor, idx + 1)) return true;
            cor[idx] = -1;
        }
    }

    return false;
}

bool possible(int n, int T, const vector<int>& prof_atual, const vector<vector<int>>& pref) {
    vector<int> cor(n, -1);
    return check(n, T, prof_atual, pref, cor, 0);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> prof_atual(n);
    // Cada criança tem sua lista de preferências com n-1 elementos
    vector<vector<int>> pref(n, vector<int>(n - 1));

    for (int i = 0; i < n; i++) {
        cin >> prof_atual[i];
        for (int j = 0; j < n - 1; j++) {
            cin >> pref[i][j];
        }
    }

    // Busca binária para encontrar o menor T
    int low = 0, high = n - 1;
    int ans = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(n, mid, prof_atual, pref)) {
            ans = mid;
            high = mid - 1; // Tenta encontrar um T menor
        } else {
            low = mid + 1; // Precisa de um T maior
        }
    }

    cout << ans << endl;

    return 0;
}
