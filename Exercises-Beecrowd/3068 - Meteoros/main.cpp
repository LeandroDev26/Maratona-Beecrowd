#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;
    int teste = 1;

    while (cin >> x1 >> y1 >> x2 >> y2 && (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0)) {
        int n;
        cin >> n;

        int meteoros_na_fazenda = 0;

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;

            if (x >= x1 && x <= x2 && y >= y2 && y <= y1) {
                meteoros_na_fazenda++;
            }
        }

        cout << "Teste " << teste++ << "\n";
        cout << meteoros_na_fazenda << "\n";
    }

    return 0;
}
