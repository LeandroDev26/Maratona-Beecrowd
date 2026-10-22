#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    queue<int> fila;

    vector<int> dist(f + 1, -1);

    fila.push(s);
    dist[s] = 0;

    return 0;
}
