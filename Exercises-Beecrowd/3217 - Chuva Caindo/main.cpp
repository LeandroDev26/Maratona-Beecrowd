#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double L, K, T1, T2, H;

    while (cin >> L >> K >> T1 >> T2 >> H) {
        double F1, F2;

        if (H < L) {

            F1 = H;
            F2 = H;
        } else if (H == L) {

            F1 = L;

            double b = K * T1 + L + K * T2;
            double c = L * K * T1;
            F2 = (b + sqrt(b * b - 4 * c)) / 2.0;

        } else {

            double b = H + K * T2 + K * T1;
            double c = L * K * T1;
            F1 = (b + sqrt(b * b - 4 * c)) / 2.0;
            F2 = F1;
        }

        cout << fixed << setprecision(6) << F1 << " " << F2 << endl;
    }

    return 0;
}
