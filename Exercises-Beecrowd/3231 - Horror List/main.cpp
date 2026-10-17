#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, L;

    if (cin >> N >> H >> L) {

        vector<vector<int>> adj(N);
        vector<int> HI(N, INF);
        queue<int> q;

        for (int i = 0; i < H; i++) {
            int id_horror;
            cin >> id_horror;
            HI[id_horror] = 0;
            q.push(id_horror);
        }

        for (int i = 0; i < L; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        while (!q.empty()) {
            int atual = q.front();
            q.pop();

            for (int vizinho : adj[atual]) {

                if (HI[vizinho] == INF) {
                    HI[vizinho] = HI[atual] + 1;
                    q.push(vizinho);
                }
            }
        }

        int max_HI = -1;
        int melhor_filme = -1;

        for (int i = 0; i < N; i++) {
            if (HI[i] > max_HI) {
                max_HI = HI[i];
                melhor_filme = i;
            }
        }

        cout << melhor_filme << "\n";
    }

    return 0;
}
