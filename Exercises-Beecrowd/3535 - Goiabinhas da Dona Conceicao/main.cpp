#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Otimiza leitura e escrita para grandes volumes de dados
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    // Vetor 1-indexado para facilitar o cálculo de L - 1
    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long ai;
        cin >> ai;
        pref[i] = pref[i - 1] + ai;
    }

    for (int k = 0; k < q; k++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }

    return 0;
}
